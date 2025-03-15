#include <stddef.h>
#include <string.h>

extern char **__environ;

const char *getenv(const char *name) {
    register size_t i = 0;
    size_t len = strlen(name);
    if (!__environ || !*name || strchr(name, '=')) return NULL;
    for (; __environ[i]; i++) {
        if (strncmp(__environ[i], name, len) == 0 
            && __environ[i][len] == '=') return __environ[i] + len + 1;
    }
    return NULL;
}
