#include <unistd.h>    // for write()
#include <string.h>    // for strlen()
#include <fcntl.h>     // for open()
#include <stdio.h>     // for perror()

void print_to_stream(int fd, const char *str) {
    if (str == NULL) return;

    write(fd, str, strlen(str));
}

int main() {
    print_to_stream(1, "Message to STDOUT\n");  // print on screen

    int file = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (file == -1) {
        perror("error in openning file!");
        return 1;
    }
    printf("%d",file); // value of file = 3
     
    print_to_stream(file, "Message to File\n"); // print in file

    close(file);
    return 0;
}