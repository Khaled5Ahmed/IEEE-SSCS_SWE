#include <stdio.h>

char *get_reply() {
    static char reply[] = "Message received.";
    return reply;
}

int main() {
    char *message = get_reply();
    printf("Reply: %s\n", message);
    return 0;
}