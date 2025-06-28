#include <stdio.h>

int main(int argc, char *argv[]) {
    if (argc == 1) {
        printf("Silence. Nothing came through.\n");
        return 0;
    }

    for (int i = 1; i < argc; i++) {
        printf("%s\n", argv[i]);
    }

    return 0;
}
