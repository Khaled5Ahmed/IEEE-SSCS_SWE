#include <stdio.h>

typedef enum {
    TYPE_INT,
    TYPE_FLOAT,
    TYPE_CHAR,
    TYPE_DOUBLE,
    TYPE_STRING
} DataType;


void echo_data(void *data, DataType type)
{
    switch (type) {
        case TYPE_INT:
            printf("%d\n", *(int *)data);
            break;
        case TYPE_FLOAT:
            printf("%f\n", *(float *)data);
            break;
        case TYPE_CHAR:
            printf("%c\n", *(char *)data);
            break;
        case TYPE_DOUBLE:
            printf("%lf\n", *(double *)data);
            break;
        case TYPE_STRING:
            printf("%s\n", (char *)data);
            break;
        default:
            printf("Unknown type\n");
    }
}

int main(void)
{
    int a = 22;
    float b = 3.14;
    char c = 'K';
    double d = 4.123456789;
    char *str = "Khaled Ahmed";

    echo_data(&a, TYPE_INT);
    echo_data(&b, TYPE_FLOAT);
    echo_data(&c, TYPE_CHAR);
    echo_data(&d, TYPE_DOUBLE);
    echo_data(str, TYPE_STRING);

    return 0;
}                                                                                                                                                                                                                                                                                               