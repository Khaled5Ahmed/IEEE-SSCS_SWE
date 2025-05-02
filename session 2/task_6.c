#include <stdio.h>

void print_message(char *msg) {
    printf("%s\n", msg);
}

int main() {
    char message[] = "Hello, I am Khaled Ahmed";

    print_message(message);

    return 0;
}