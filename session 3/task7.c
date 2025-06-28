#include <stdio.h>
#include <stdlib.h>
#include <string.h> // عشان memcpy

void *_reshape(void *ptr, size_t old_size, size_t new_size)
{
    if (ptr == NULL)
        return malloc(new_size);

    if (new_size == 0) {
        free(ptr);
        return NULL;
    }

    void *new_ptr = malloc(new_size);
    if (new_ptr == NULL)
        return NULL; 

    size_t min_size = old_size < new_size ? old_size : new_size;
    memcpy(new_ptr, ptr, min_size);                                // memcpy(destination, source, number_of_bytes);


    free(ptr); 

    return new_ptr;
}

int main() {
    printf("=== Testing _reshape ===\n");

    int *arr = (int *)malloc(3 * sizeof(int));
    if (arr == NULL) {
        printf("Initial allocation failed\n");
        return 1;
    }

    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;

    printf("Before reshape:\n");
    for (int i = 0; i < 3; i++)
        printf("arr[%d] = %d\n", i, arr[i]);

    arr = (int *)_reshape(arr, 3 * sizeof(int), 5 * sizeof(int));
    if (arr == NULL) {
        printf("Reshape failed\n");
        return 1;
    }

    arr[3] = 40;
    arr[4] = 50;

    printf("\nAfter reshape to 5 elements:\n");
    for (int i = 0; i < 5; i++)
        printf("arr[%d] = %d\n", i, arr[i]);

    int *new_arr = (int *)_reshape(NULL, 0, 2 * sizeof(int));
    if (new_arr != NULL) {
        new_arr[0] = 100;
        new_arr[1] = 200;

        printf("\nAllocated from NULL pointer:\n");
        for (int i = 0; i < 2; i++)
            printf("new_arr[%d] = %d\n", i, new_arr[i]);

        free(new_arr);
    }

    arr = (int *)_reshape(arr, 5 * sizeof(int), 0);
    if (arr == NULL) {
        printf("\nMemory successfully freed using new_size = 0\n");
    }

    return 0;
}
