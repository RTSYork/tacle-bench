/*

  This program is part of the TACLeBench benchmark suite.
  Version V 2.0

  Name: quicksortlibm.c

  Author: Ian Lance Taylor

  Function: IEEE754 software library routines.

  Source: Sun Microsystems and Cygnus

  Original name: Unknown

  Changes: No major functional changes.

  License: See quicksortlibm.c

*/


#ifndef __QUICKSORTLIBM
#define __QUICKSORTLIBM

// The following defines map the math functions to specialized calls
#define quicksort_acos( a )     quicksort___ieee754_acosf( a )
#define quicksort_atan( a )     quicksort___atanf( a )
#define quicksort_cos( a )      quicksort___cosf( a )
#define quicksort_fabs( a )     quicksort___fabsf( a )
#define quicksort_fabsf( a )    quicksort___fabsf( a )
#define quicksort_isinf( a )    quicksort___isinff( a )
#define quicksort_pow( a, b )   quicksort___ieee754_powf( a, b )
#define quicksort_sqrt( a )     quicksort___ieee754_sqrtf( a )
#define quicksort_log10( a )    quicksort___ieee754_log10f( a )
#define quicksort_log( a )      quicksort___ieee754_logf( a )
#define quicksort_sin( a )      quicksort___sinf( a )

float quicksort___atanf( float );
float quicksort___copysignf( float, float );
float quicksort___cosf( float );
float quicksort___fabsf( float );
float quicksort___floorf( float );
float quicksort___ieee754_acosf( float );
float quicksort___ieee754_powf( float, float );
int quicksort___ieee754_rem_pio2f( float, float * );
float quicksort___ieee754_sqrtf( float );
int quicksort___isinff( float );
float quicksort___kernel_cosf( float, float );
float quicksort___kernel_sinf( float, float, int );
int quicksort___kernel_rem_pio2f( float *, float *, int, int, int,
                                  const int * );
float quicksort___scalbnf( float, int );
float quicksort___ieee754_logf( float );
float quicksort___ieee754_log10f( float );
float quicksort___sinf( float );

#endif // __QUICKSORTLIBM
