#include <stdio.h>

struct env_var {
    char *key;
    char *value;
    struct env_var *next;
};

