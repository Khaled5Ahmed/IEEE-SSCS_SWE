#include <stdio.h>

int manual_sizeof(int arr[])
{
    int *p1 = & arr[0];
    int *p2 = & arr[1];

    return (char*)p2 - (char*)p1;
}

int main(void)
{
    int arr[2];
    printf("Manual sizeof(int): %d\n", manual_sizeof (arr));
    printf("Manual sizeof array (int): %d\n", manual_sizeof (arr) * 2);

    return 0;
}
