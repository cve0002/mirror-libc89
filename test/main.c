#include "io/stdio.h"
#include "string/string.h"

int main(int argc, const char **argv) {
    write(STDOUT_FILENO, argv[0], strlen(argv[0]));
    return argc - 1;
}
