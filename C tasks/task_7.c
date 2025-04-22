#include <stdio.h>
#include "my_putchar.h"

int main(void){
    int i,j,k;
    for( i = 0; i <= 7; i++){
        for( j = i+1; j <= 8; j++ ){
            for(k = j+1; k <= 9; k++){
            my_putchar(i + '0');
            my_putchar(j + '0');
            my_putchar(k + '0');

           if (!(i == 7 && j == 8 && k == 9)) {
                my_putchar(',');
                my_putchar(' ');
            }
        }
        }
    }

    return 0;
}