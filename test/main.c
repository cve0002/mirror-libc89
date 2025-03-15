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
    char buftest[11];
    const char *progname;
    const char *env_test_var;
    char cwd[100];

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

    if (-1 == chdir("test")) {
        perror("chdir");
        return -1;
    }

    if (-1 == mkdir("test.d", _S_DEFDIR)) {
        perror("mkdir");
        return -1;
    }
    _fputs("test/test.d created\n", STDOUT_FILENO);

    if (-1 == rmdir("test.d")) {
        perror("rmdir");
        return -1;
    }
    _fputs("test/test.d removed\n", STDOUT_FILENO);

    if (-1 == chdir("..")) {
        perror("chdir");
        return -1;
    }


    if (!getcwd(cwd, sizeof(cwd))) {
        perror("getcwd");
        return -1;
    }
    

    return 0;
}
