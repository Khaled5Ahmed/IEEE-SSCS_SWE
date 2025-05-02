#include <stdio.h>
#include <ctype.h>

int counter_words(char *mystring) {
    int count = 0;
    int in_word = 0;

    while (*mystring) {
        if (isspace(*mystring)) {
            in_word = 0;
        } else if (!in_word) {
            count++;
            in_word = 1;
        }
        mystring++;
    }

    return count;
}

int main() {
    char text[] = "My name is Khaled Ahmed";
    printf("Number of words: %d\n", counter_words(text));
    return 0;
}