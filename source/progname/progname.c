const char *__progname = 0;

void setprogname(const char *name) {
    __progname = name;
}

const char *getprogname(void) {
    return __progname;
}
