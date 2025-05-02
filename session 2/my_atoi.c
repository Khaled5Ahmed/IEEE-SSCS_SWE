#include "my_atoi.h"

int my_atoi(const char *str) {
    int result = 0;
    int sign = 1;
    int i = 0;

    while (isspace(str[i])) {
        i++;
    }

    if (str[i] == '-') {
        sign = -1;
        i++;
    } else if (str[i] == '+') {
        i++;
    }

    while (isdigit(str[i])) {
        result = result * 10 + (str[i] - '0');
        i++;
    }

    return sign * result;
}
