#include <stdio.h>
#include <stdlib.h>

int *summon_allies(int *allies, int n)
{
    allies = (int *)malloc(n * sizeof(int));
    if (allies == NULL) {
        printf("Memory allocation failed!\n");
        return NULL;
    }

    printf("Enter %d allies (integers):\n", n);
    for (int i = 0; i < n; i++) {
        printf("Ally %d: ", i + 1);
        scanf("%d", &allies[i]);
    }

    return allies;
}

int main(void)
{
    int n;
    printf("How many allies do you want to summon? ");
    scanf("%d", &n);

    int *allies = NULL;

    allies = summon_allies(allies, n);

    if (allies == NULL) {
        return 1;
    }

    printf("You summoned the following allies:\n");
    for (int i = 0; i < n; i++) {
        printf("Ally %d: %d\n", i + 1, allies[i]);
    }

    free(allies);

    return 0;
}
