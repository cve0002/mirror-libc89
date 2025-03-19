#include <stddef.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>

noreturn void __unimplemented(const char *msg, const char *file, const char *line) {
    /* fprintf(stderr, "[%s:%ld] unimplemented: ", file, line); */
    write(STDERR_FILENO, "[", 1);
    write(STDERR_FILENO, file, strlen(file));
    write(STDERR_FILENO, ":", 1);
    write(STDERR_FILENO, line, strlen(line));
    write(STDERR_FILENO, "] unimplemented", 15);
    if (msg || msg[0] != '\0') {
        write(STDERR_FILENO, ": ", 2);
        write(STDERR_FILENO, msg, strlen(msg));
    }
    write(STDERR_FILENO, "\n", 1);
    _exit(-1);
}
