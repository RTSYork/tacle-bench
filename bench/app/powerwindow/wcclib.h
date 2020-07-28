#ifndef _WCCLIB
#define _WCCLIB

typedef unsigned long size_t;
typedef int int32_t;
typedef unsigned int uint32_t;
typedef unsigned short u_int16_t;
typedef unsigned int u_int32_t;

#ifndef NULL
#define NULL ( (void *) 0)
#endif

void *memset( void *s, int c, size_t n );

#endif // _WCCLIB
