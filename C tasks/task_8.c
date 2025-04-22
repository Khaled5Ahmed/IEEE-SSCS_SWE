#include "my_putchar.h"

void print_number(int n) {
    if (n >= 10) {
        my_putchar((n / 10) + '0');
        my_putchar((n % 10) + '0');
    } else {
        my_putchar(n + '0');
    }
}

int main(void) {
    int i, j;

    for (i = 0; i <= 9; i++) {
        for (j = 0; j <= 9; j++) {
            int res = i * j;
            print_number(res);

            if (j != 9) {
                my_putchar(' ');
            }
        }
        my_putchar('\n');
    }

    return 0;
}
