#ifndef __STDBOOL_H__
#define __STDBOOL_H__

#ifndef bool
    #ifdef __STRICT_ANSI__
        #define _Bool int
    #endif

    #define bool _Bool

    #define true 1
    #define false 0

    #define TRUE true
    #define FALSE false
#endif

#endif
