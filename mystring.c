#include "mystring.h"


int mystrlen(char *s) {
    int len = 0;

    while (*s != '0') {
        len++;
        s++;
    }

    return len;
}