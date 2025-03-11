#include "stdint.h"


usize strlen(const char *s) {
    const char *p = s;
    while (*p++);
	return p - s;
}

const char *strchr(const char *s, int c) {
    do {
        if (*s == c) return s;
    } while (*s++);
    return 0;
}
