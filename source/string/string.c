#include <stddef.h>
#include <stdint.h>


size_t strlen(const char *s) {
    register const char *p = s;
    for (; *p; p++) {}
    return p - s;
}


const char *strchr(register const char *s, int c) {
    do {
        if (*s == c) return s;
    } while (*s++);
    return NULL;
}

const char *strrchr(register const char *s, int c) {
    const char *p = NULL;
    do {
        if (*s == c) p = s;
    } while (*s++);
    return p;
}


int strcmp(register const char *s1, register const char *s2) {
    while (*s1 == *s2++) {
        if (*s1++ == '\0') return 0;
    }
    return *s1 - *(--s2);
}

int strncmp(register const char *s1, register const char *s2, register size_t n) {
    for (; n-- > 0; s1++, s2++) {
        if (*s1 != *s2) return *s1 - *s2;
        if (*s1 == '\0') return 0;
    }
    return 0;
}
