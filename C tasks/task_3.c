#include <stdio.h>
#include <ctype.h>


int main(void){
    char c;
    printf("Enter a letter:");
    scanf("%c",&c);
    if(islower(c)){
        printf("Lower");
    }
    else if (isupper(c))
    {
        printf("Upper");
    }
    else{
        printf("invalid input");
    }
    return 0;
}