#include "stdio.h"
#include "sys/stat.h"
#include "unistd.h"
#include "string/string.h"
#include "environ/environ.h"
#include "errno/errno.h"
#include "memory/memory.h"
#include "progname/progname.h"
#include "fcntl.h"


int _fputs(const char *s, fd_t fd) {
    return write(fd, s, strlen(s));
}

#define print_line_feed() write(STDOUT_FILENO, "\n", 1)


int main(void) {
    int fd;
    char buftest[11];
    char hwbuf[20];
    const char *hw = "Hello, World!\n";
    size_t hwl = strlen(hw);
    const char *progname;
    const char *env_test_var;

    env_test_var = getenv("XDG_CURRENT_DESKTOP");
    _fputs(env_test_var, STDOUT_FILENO);
    print_line_feed();
    
    memset(buftest, '~', 10);
    buftest[10] = '*';
    write(STDOUT_FILENO, buftest, 11);
    print_line_feed();

    progname = getprogname();
    _fputs(progname, STDOUT_FILENO);
    print_line_feed();
    
    fd = open("test/test.txt", O_RDONLY);
    if (-1 == fd) {
        perror("open");
        return -1;
    }
    if (-1 == read(fd, hwbuf, hwl)) {
        perror("read");
        return -1;
    }
    if (-1 == write(STDOUT_FILENO, hwbuf, hwl)) {
        perror("write");
        return -1;
    }
    if (-1 == close(fd)) {
        perror("close");
        return -1;
    }

    return 0;
}
