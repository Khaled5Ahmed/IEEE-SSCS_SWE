#include <stdio.h>

int sum_layers(int n) {
    if (n <= 0)
        return 0;
    return n + sum_layers(n - 1);
}

int main() {
    printf("Sum of 5 layers: %d\n", sum_layers(5));  // 15
    printf("Sum of 10 layers: %d\n", sum_layers(10)); // 55
    printf("Sum of 0 layers: %d\n", sum_layers(0));  // 0
    return 0;
}