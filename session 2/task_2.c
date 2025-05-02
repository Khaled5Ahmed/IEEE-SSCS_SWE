#include <stdio.h>

int is_strong_signal(int strength)
{
    return strength > 50 ? 1 : 0;
}

void check_signal(int strength)
{
    if (is_strong_signal(strength))
    {
        printf("Strength: %d -> Strong signal detected.\n", strength);
    }
    else
    {
        printf("Strength: %d -> No signal detected.\n", strength);
    }
}

int main()
{
    int signals[] = {20, 51, 49, 80, 30, 100};
    int size = sizeof(signals) / sizeof(signals[0]);

    for (int i = 0; i < size; i++)
    {
        check_signal(signals[i]);
    }

    return 0;
}