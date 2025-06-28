#include <stdio.h>
#include <stdlib.h>

int global_var = 100;

int main(void)
{
    int local_var = 200;

    int *heap_var = (int *)malloc(sizeof(int));
    *heap_var = 300;

    char *str = "Khaled Ahmed";

    printf("(%p : data segment) -> %d\n", (void *)&global_var, global_var);
    printf("(%p : stack segment) -> %d\n", (void *)&local_var, local_var);
    printf("(%p : heap segment) -> %d\n", (void *)heap_var, *heap_var);
    printf("(%p : read-only data segment) -> %s\n", (void *)str, str);

    free(heap_var);

    return 0;
}
