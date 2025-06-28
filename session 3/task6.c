#include <stdio.h>
#include <stdlib.h>

void *clear_allocation(size_t count, size_t size)
{
    size_t total_size = count * size;
    void *ptr = malloc(total_size);

    if (ptr == NULL) {
        return NULL; 
    }

    unsigned char *byte_ptr = (unsigned char *)ptr;
    for (size_t i = 0; i < total_size; i++) {
        byte_ptr[i] = 0;
    }

    return ptr;
}

int main(void)
{
    int n = 5;
    int *arr = (int *)clear_allocation(n, sizeof(int));

    if (arr == NULL) {
        printf("Allocation failed!\n");
        return 1;
    }

    printf("Allocated and cleared array:\n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    free(arr);
    return 0;
}
