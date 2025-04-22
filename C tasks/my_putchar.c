#include <unistd.h>

int my_putchar(char c){
    return (write(1,&c,1));
}

// void my_puts(char *str){
//     int i = 0;
//     while(str[i] != '\0'){
//         my_putchar(str[i]);
//         i++;
//     }
// }
