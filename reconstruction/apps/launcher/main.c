#include "launcher_tool.h"
#include "reconstruction_startup.h"

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct LauncherCliRegistryContext {
    int created_key_count;
} LauncherCliRegistryContext;

typedef struct LauncherCliShellContext {
    size_t launch_count;
} LauncherCliShellContext;

typedef struct LauncherCliDisplayContext {
    int warning_count;
} LauncherCliDisplayContext;

static int launcher_cli_create_key(
    const char *root_name, const char *subkey, void *ctx) {
    LauncherCliRegistryContext *registry_context;

    (void)root_name;
    (void)subkey;
    registry_context = (LauncherCliRegistryContext *)ctx;
    registry_context->created_key_count++;
    return 0;
}

static int launcher_cli_execute(const char *target, void *ctx) {
    LauncherCliShellContext *shell_context;

    shell_context = (LauncherCliShellContext *)ctx;
    shell_context->launch_count++;
    printf("launch: %s\n", target);
    return 0;
}

static int launcher_cli_show_low_color_warning(void *ctx) {
    LauncherCliDisplayContext *display_context;

    display_context = (LauncherCliDisplayContext *)ctx;
    display_context->warning_count++;
    puts("warning: low colour depth detected");
    return 0;
}

static void launcher_print_usage(const char *program_name) {
    fprintf(stderr,
        "usage: %s [--company NAME] [--product NAME] [--section NAME]\n"
        "          [--applets PATHS] [--bits-per-pixel N]\n",
        program_name);
}

int main(int argc, char **argv) {
    const char *company;
    const char *product;
    const char *section;
    const char *applets;
    unsigned int bits_per_pixel;
    int have_bits_per_pixel;
    LauncherCliRegistryContext registry_context;
    LauncherCliShellContext shell_context;
    LauncherCliDisplayContext display_context;
    LauncherRegistryOps registry_ops;
    LauncherShellOps shell_ops;
    LauncherDisplayOps display_ops;
    LauncherRegistryHandler handler;

    company = "Millennium Interactive";
    product = "Creatures";
    section = "Launcher";
    applets = NULL;
    bits_per_pixel = 8;
    have_bits_per_pixel = 0;
    memset(&registry_context, 0, sizeof(registry_context));
    memset(&shell_context, 0, sizeof(shell_context));
    memset(&display_context, 0, sizeof(display_context));

    for (int index = 1; index < argc; index++) {
        if (strcmp(argv[index], "--company") == 0 && index + 1 < argc) {
            company = argv[++index];
        } else if (strcmp(argv[index], "--product") == 0 && index + 1 < argc) {
            product = argv[++index];
        } else if (strcmp(argv[index], "--section") == 0 && index + 1 < argc) {
            section = argv[++index];
        } else if (strcmp(argv[index], "--applets") == 0 && index + 1 < argc) {
            applets = argv[++index];
        } else if (strcmp(argv[index], "--bits-per-pixel") == 0 && index + 1 < argc) {
            bits_per_pixel = (unsigned int)strtoul(argv[++index], NULL, 10);
            have_bits_per_pixel = 1;
        } else if (strcmp(argv[index], "--help") == 0 || strcmp(argv[index], "-h") == 0) {
            launcher_print_usage(argv[0]);
            return 0;
        } else {
            launcher_print_usage(argv[0]);
            return 2;
        }
    }

    registry_ops.create_key = launcher_cli_create_key;
    registry_ops.read_value = NULL;
    registry_ops.write_value = NULL;
    registry_ops.ctx = &registry_context;

    shell_ops.execute = launcher_cli_execute;
    shell_ops.path_exists = reconstruction_host_path_exists;
    shell_ops.ctx = &shell_context;

    display_ops.show_low_color_warning = launcher_cli_show_low_color_warning;
    display_ops.ctx = &display_context;

    if (!launcher_registry_handler_init(&handler, &registry_ops, company, product, section)) {
        fprintf(stderr, "launcher_reconstruction: failed to initialize registry handler\n");
        return 2;
    }

    printf("registry_path: %s\n", handler.registry_path);
    printf("created_keys: %d\n", registry_context.created_key_count);

    if (applets != NULL) {
        printf("launched_applets: %zu\n", launcher_launch_applets(applets, &shell_ops));
    }

    if (have_bits_per_pixel != 0) {
        printf("low_color_warning_triggered: %s\n",
            launcher_warn_if_low_color_depth(&display_ops, bits_per_pixel) ? "yes" : "no");
    }

    return 0;
}
