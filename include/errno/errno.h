#ifndef __ERRNO_H__
#define __ERRNO_H__

#include "errnos.h"

extern int *__errno_location(void);
#define errno (*__errno_location())

#endif /* __ERRNO_H__ */
