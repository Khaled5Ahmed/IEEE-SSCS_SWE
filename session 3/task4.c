#include <stdio.h>

int global_counter = 0;

void access_one(void)
{
    static int counter = 0;
    counter++;
    global_counter++;
    printf("access_one called %d times\n", counter);
}

void access_two(void)
{
    static int counter = 0;
    counter++;
    global_counter++;
    printf("access_two called %d times\n", counter);
}

int main(void)
{
    access_one();  // 1
    access_one();  // 2
    access_two();  // 1
    access_one();  // 3
    access_two();  // 2

    printf("Total function calls: %d\n", global_counter); // 5

    return 0;
}
