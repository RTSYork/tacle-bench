/*

  This program is part of the TACLeBench benchmark suite.
  Version V 1.x

  Name: fac

  Author: unknown

  Function: fac is a program to calculate factorials.
    This program computes the sum of the factorials
    from zero to five.

  Source: MRTC
          http://www.mrtc.mdh.se/projects/wcet/wcet_bench/fac/fac.c

  Changes: CS 2006/05/19: Changed loop bound from constant to variable.

  License: public domain

*/

/*
  Forward declaration of functions
*/
/* int printf(const char * restrict format, ... ); */
int fac_fac( int n );
void fac_init();
int fac_return();
void fac_main();
int main( void );
int counter1 = 0;
/*
  Declaration of global variables
*/

int fac_s;
volatile int fac_n;


/*
  Initialization- and return-value-related functions
*/


void fac_init()
{
  fac_s = 0;
  fac_n = 5;
}


int fac_return()
{
  int expected_result = 154;
  return fac_s - expected_result;
}


/*
  Arithmetic math functions
*/


int fac_fac ( int n )
{
    counter1++;
  if ( n == 0 )
    return 1;
  else
    return ( n * fac_fac ( n - 1 ) );
}


/*
  Main functions
*/


void fac_main ()
{
  #pragma entrypoint
  int i;

  #pragma loopbound min 6 max 6
  for ( i = 0;  i <= fac_n; i++ ) {
    #pragma marker recursivecall
    fac_s += fac_fac ( i );
    #pragma flowrestriction 1*fac_fac <= 6*recursivecall
  }
  /* printf("%d\n", counter1); */
}


int main ( void )
{
  fac_init();
  fac_main();

  return ( fac_return() );
}

