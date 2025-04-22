#include <stdio.h>
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
    int n,i, j;
    printf("Enter N :");
    scanf("%d",&n);

    for (i = 0; i <= n; i++) {
        for (j = 0; j <= n; j++) {
            int res = i * j;
            print_number(res);

            if (j != n) {
                my_putchar(' ');
            }
        }
        my_putchar('\n');
    }

    return 0;
}
