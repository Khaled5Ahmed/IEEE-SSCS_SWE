#include <stdio.h>

int main()
{
    int signal = 98;
    int *ptr = &signal;

    printf("Address stored in ptr: %p\n", (void *)ptr);
    printf("Value of signal: %d\n", signal);

    return 0;
}