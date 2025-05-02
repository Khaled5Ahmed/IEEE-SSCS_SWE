#include <stdio.h>
#include "my_atoi.h"

int my_abs(int x) {
    return x < 0 ? -x : x;
}

int main(int argc, char *argv[]) {
    int sum = 0;

    for (int i = 1; i < argc; i++) {    // argv[0] = ./task_14
        int number = my_atoi(argv[i]);  //argv[1......n] = number
        sum += my_abs(number);          // ex: ./task_14 7 1 -6 -----> sum = |7|+ |1|+ |-6| = 14
    }

    printf("Sum of absolute values: %d\n", sum);
    return 0;
}