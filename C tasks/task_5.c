#include <stdio.h>

int main(void){
    char c;
    printf("Enter input:");
    scanf("%c",&c);
    if(c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'a' ){
        printf("input is alphabet");
    }
    else{
        printf("input is not alphabet");
    }
    return 0;
}