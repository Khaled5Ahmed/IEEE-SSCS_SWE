#include <stdio.h>
#include "my_putchar.h"

int main(void){
for(int i = 0; i < 5; i++){    
    for(char c = 'a'; c <= 'z'; c++){
        my_putchar(c);
        }
        my_putchar('\n');
}
return 0;
}