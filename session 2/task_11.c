#include <stdio.h>
#include "my_atoi.h"

void my_putchar(FILE *fp, char c) {
    fputc(c, fp);
}

int main() {
    const char *input = "-12345";
    int number = my_atoi(input);

    FILE *fp = fopen("converted_numbers.txt", "w");
    if (fp == NULL) {
        perror(" error in openning file!");
        return 1;
    }

    char buffer[20];
    snprintf(buffer, sizeof(buffer), "%d", number);

    for (int i = 0; buffer[i] != '\0'; i++) {
        my_putchar(fp, buffer[i]);
    }

    fclose(fp);
    return 0;
}