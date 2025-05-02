#include <stdio.h>

int is_response_detected(int strength)
{
    return strength > 50 ? 1 : 0;
}

int main()
{
    int test_values[] = {30, 50, 60, 80, 45};
    int size = sizeof(test_values) / sizeof(test_values[0]);

    for (int i = 0; i < size; i++)
    {
        int detected = is_response_detected(test_values[i]);
        printf("Strength: %d -> Response %s\n",
               test_values[i],
               detected ? "detected" : "not detected");
    }

    return 0;
}