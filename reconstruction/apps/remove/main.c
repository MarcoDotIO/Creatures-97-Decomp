#include "remove_tool.h"

#include <stdio.h>
#include <string.h>

static void remove_print_usage(const char *program_name) {
    fprintf(stderr,
        "usage: %s [--main-directory PATH] [--image-directory PATH]\n"
        "          [--genetics-directory PATH] [--uninstall-string CMD]\n",
        program_name);
}

int main(int argc, char **argv) {
    RemoveInstallLayout layout;
    RemoveCleanupPlan cleanup_plan;
    size_t cleanup_key_count;
    const char *const *cleanup_keys;

    memset(&layout, 0, sizeof(layout));
    strncpy(layout.main_directory, "C:\\Creatures", sizeof(layout.main_directory) - 1);
    strncpy(layout.image_directory, "C:\\Creatures\\Images", sizeof(layout.image_directory) - 1);
    strncpy(
        layout.genetics_directory, "C:\\Creatures\\Genetics", sizeof(layout.genetics_directory) - 1);
    strncpy(layout.uninstall_command, "C:\\Creatures\\remove.exe",
        sizeof(layout.uninstall_command) - 1);

    for (int index = 1; index < argc; index++) {
        if (strcmp(argv[index], "--main-directory") == 0 && index + 1 < argc) {
            strncpy(layout.main_directory, argv[++index], sizeof(layout.main_directory) - 1);
            layout.main_directory[sizeof(layout.main_directory) - 1] = '\0';
        } else if (strcmp(argv[index], "--image-directory") == 0 && index + 1 < argc) {
            strncpy(layout.image_directory, argv[++index], sizeof(layout.image_directory) - 1);
            layout.image_directory[sizeof(layout.image_directory) - 1] = '\0';
        } else if (strcmp(argv[index], "--genetics-directory") == 0 && index + 1 < argc) {
            strncpy(layout.genetics_directory, argv[++index], sizeof(layout.genetics_directory) - 1);
            layout.genetics_directory[sizeof(layout.genetics_directory) - 1] = '\0';
        } else if (strcmp(argv[index], "--uninstall-string") == 0 && index + 1 < argc) {
            strncpy(layout.uninstall_command, argv[++index], sizeof(layout.uninstall_command) - 1);
            layout.uninstall_command[sizeof(layout.uninstall_command) - 1] = '\0';
        } else if (strcmp(argv[index], "--help") == 0 || strcmp(argv[index], "-h") == 0) {
            remove_print_usage(argv[0]);
            return 0;
        } else {
            remove_print_usage(argv[0]);
            return 2;
        }
    }

    remove_build_cleanup_plan(&layout, &cleanup_plan);
    printf("main_directory: %s\n", layout.main_directory);
    printf("image_directory: %s\n", layout.image_directory);
    printf("genetics_directory: %s\n", layout.genetics_directory);
    printf("uninstall_command: %s\n", layout.uninstall_command);
    printf("cleanup_actions: %zu\n", cleanup_plan.action_count);
    for (size_t index = 0; index < cleanup_plan.action_count; index++) {
        printf("  [%zu] %s %s\n", index,
            cleanup_plan.actions[index].kind == REMOVE_ACTION_DELETE_GLOB ? "glob" : "file",
            cleanup_plan.actions[index].target);
    }

    cleanup_keys = remove_registry_cleanup_keys(&cleanup_key_count);
    printf("registry_cleanup_keys: %zu\n", cleanup_key_count);
    printf("first_registry_cleanup_key: %s\n", cleanup_key_count > 0 ? cleanup_keys[0] : "");
    return 0;
}
