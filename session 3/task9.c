#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Being {
    char *name;
    int age;
    float energy_level;
};

void print_being(struct Being *b) {
    if (b == NULL) return;
    printf("Name: %s, Age: %d, Energy: %.2f\n", b->name, b->age, b->energy_level);
}

int main() {
    struct Being khaled;
    khaled.name = "Khaled";
    khaled.age = 21;
    khaled.energy_level = 90;

    print_being(&khaled);
    return 0;
}
