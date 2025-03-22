#ifndef __PROGNAME_H__
#define __PROGNAME_H__

void setprogname(const char *);
const char *getprogname(void);

const char *getfullprogname(void); /* cannot be overridden */

#endif /* __PROGNAME_H__ */
