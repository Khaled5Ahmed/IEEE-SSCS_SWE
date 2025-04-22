#include <stdio.h>
#include "my_putchar.h"

int main(void){
for(char c = 'a'; c <= 'z'; c++){
if (c != 'q') {
    my_putchar(c);
    }
}

for(char c = 'z'; c >= 'a'; c--){
if (c != 'q') {
    my_putchar(c-32);
    }
}
my_putchar('\n');
return 0;
}