# include <stdio.h>

void status (int n){
    if(n > 0)
        printf("Positive\n");
    else if (n < 0)
        printf("Negative\n");
    else 
    printf("Zero\n");   

}

int main(void){

void(*funcPtr)(int);
funcPtr = & status;
    funcPtr(10);
    funcPtr(-3);  
    funcPtr(0);   

    return 0;
}


