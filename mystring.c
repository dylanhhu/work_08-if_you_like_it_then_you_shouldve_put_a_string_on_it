#include "mystring.h"
#include <stdio.h>

// works
int mystrlen(char *s) {
    int len = 0;

    while (*s != '\0') {
        len++;
        s++;
    }

    return len;
}

// works
char * mystrcpy(char *dest, char *source) {
    int i;

    for (i = 0; source[i] != '\0'; i++) {
        dest[i] = source[i];
    }

    dest[i] = source[i];

    return dest;
}

// works
char * mystrcat(char *dest, char *source) {
    int dest_len = mystrlen(dest);
    int i;

    for (i = 0; source[i] != '\0'; i++) {
        dest[dest_len + i] = source[i];
    }

    dest[dest_len + i] = '\0';

    return dest;
}

// works: gives right sign, but wrong values, but whatever
int mystrcmp(char *s1, char *s2) {
    while (*s1 && (*s1 == *s2)) {
        s1++;
        s2++;
    }

    return *s1 - *s2;
}

// works
char * mystrchr(char *s, char c) {
    int i;
    int len = mystrlen(s);

    for (i = 0; i <= len; i++) {
        if (s[i] == c) return &s[i];
    }

    return '\0';
}
