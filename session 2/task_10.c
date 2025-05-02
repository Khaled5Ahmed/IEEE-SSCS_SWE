#include <stdio.h>

int helper(long long int n, int *count) {
    if (n < 0)
        n = -n; 

    if (n < 10) {
        (*count)++;
        return n;
    }

    (*count)++;
    return (n % 10) + helper(n / 10, count);
}

int sumDigits(long long int n) {
    int digit_count = 0;
    int sum = helper(n, &digit_count);
    printf("Number of digits: %d\n", digit_count);
    return sum;
}

int main() {
    long long int n = -12345;
    printf("Sum of digits: %d\n", sumDigits(n));
    return 0;
}