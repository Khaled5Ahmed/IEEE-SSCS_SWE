#include <stdio.h>
#include "my_putchar.h"

int main(void){
    int i,j ;
    for( i = 0; i <= 8; i++){
        for( j = i+1; j <= 9; j++ ){
            my_putchar(i + '0');
            my_putchar(j + '0');
           if (!(i == 8 && j == 9)) {
                my_putchar(',');
                my_putchar(' ');
            }
        }
    }

    return 0;
}