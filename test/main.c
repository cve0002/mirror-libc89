#include "io/stdio.h"
#include "string/string.h"


extern char **__environ;

int main(void) {
    int i;
    for (i = 0; __environ[i]; i++) {
        write(STDOUT_FILENO, __environ[i], strlen(__environ[i]));
        write(STDOUT_FILENO, "\n", 1);
    }
    return 0;
}
