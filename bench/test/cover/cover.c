/*

  This program is part of the TACLeBench benchmark suite.
  Version 2.0

  Name: cover

  Author: unknown

  Function: A program for testing many paths generated by switch-case
            statements.

  Source: MRTC
          http://www.mrtc.mdh.se/projects/wcet/wcet_bench/cover/cover.c

  Original name: cover

  Changes: See ChangeLog.txt

  License: may be used, modified, and re-distributed freely

*/


/*
  Forward declaration of functions
*/

void cover_init( void );
void cover_main( void );
int cover_return( void );
int cover_swi10( int );
int cover_swi50( int );
int cover_swi120( int );


/*
  Declaration of global variables
*/

static volatile int cover_cnt;


/*
  Initialization- and return-value-related functions
*/

void cover_init( void )
{
  cover_cnt = 0;
}


int cover_return( void )
{
  return cover_cnt - 180;
}


/*
  Core benchmark functions
*/

int cover_swi120( int c )
{
  int i;

  #pragma loopbound min 120 max 120
  for ( i = 0; i < 120; i++ ) {
    switch ( i ) {
      case 0:
        c++;
        break;
      case 1:
        c++;
        break;
      case 2:
        c++;
        break;
      case 3:
        c++;
        break;
      case 4:
        c++;
        break;
      case 5:
        c++;
        break;
      case 6:
        c++;
        break;
      case 7:
        c++;
        break;
      case 8:
        c++;
        break;
      case 9:
        c++;
        break;
      case 10:
        c++;
        break;
      case 11:
        c++;
        break;
      case 12:
        c++;
        break;
      case 13:
        c++;
        break;
      case 14:
        c++;
        break;
      case 15:
        c++;
        break;
      case 16:
        c++;
        break;
      case 17:
        c++;
        break;
      case 18:
        c++;
        break;
      case 19:
        c++;
        break;
      case 20:
        c++;
        break;
      case 21:
        c++;
        break;
      case 22:
        c++;
        break;
      case 23:
        c++;
        break;
      case 24:
        c++;
        break;
      case 25:
        c++;
        break;
      case 26:
        c++;
        break;
      case 27:
        c++;
        break;
      case 28:
        c++;
        break;
      case 29:
        c++;
        break;
      case 30:
        c++;
        break;
      case 31:
        c++;
        break;
      case 32:
        c++;
        break;
      case 33:
        c++;
        break;
      case 34:
        c++;
        break;
      case 35:
        c++;
        break;
      case 36:
        c++;
        break;
      case 37:
        c++;
        break;
      case 38:
        c++;
        break;
      case 39:
        c++;
        break;
      case 40:
        c++;
        break;
      case 41:
        c++;
        break;
      case 42:
        c++;
        break;
      case 43:
        c++;
        break;
      case 44:
        c++;
        break;
      case 45:
        c++;
        break;
      case 46:
        c++;
        break;
      case 47:
        c++;
        break;
      case 48:
        c++;
        break;
      case 49:
        c++;
        break;
      case 50:
        c++;
        break;
      case 51:
        c++;
        break;
      case 52:
        c++;
        break;
      case 53:
        c++;
        break;
      case 54:
        c++;
        break;
      case 55:
        c++;
        break;
      case 56:
        c++;
        break;
      case 57:
        c++;
        break;
      case 58:
        c++;
        break;
      case 59:
        c++;
        break;
      case 60:
        c++;
        break;
      case 61:
        c++;
        break;
      case 62:
        c++;
        break;
      case 63:
        c++;
        break;
      case 64:
        c++;
        break;
      case 65:
        c++;
        break;
      case 66:
        c++;
        break;
      case 67:
        c++;
        break;
      case 68:
        c++;
        break;
      case 69:
        c++;
        break;
      case 70:
        c++;
        break;
      case 71:
        c++;
        break;
      case 72:
        c++;
        break;
      case 73:
        c++;
        break;
      case 74:
        c++;
        break;
      case 75:
        c++;
        break;
      case 76:
        c++;
        break;
      case 77:
        c++;
        break;
      case 78:
        c++;
        break;
      case 79:
        c++;
        break;
      case 80:
        c++;
        break;
      case 81:
        c++;
        break;
      case 82:
        c++;
        break;
      case 83:
        c++;
        break;
      case 84:
        c++;
        break;
      case 85:
        c++;
        break;
      case 86:
        c++;
        break;
      case 87:
        c++;
        break;
      case 88:
        c++;
        break;
      case 89:
        c++;
        break;
      case 90:
        c++;
        break;
      case 91:
        c++;
        break;
      case 92:
        c++;
        break;
      case 93:
        c++;
        break;
      case 94:
        c++;
        break;
      case 95:
        c++;
        break;
      case 96:
        c++;
        break;
      case 97:
        c++;
        break;
      case 98:
        c++;
        break;
      case 99:
        c++;
        break;
      case 100:
        c++;
        break;
      case 101:
        c++;
        break;
      case 102:
        c++;
        break;
      case 103:
        c++;
        break;
      case 104:
        c++;
        break;
      case 105:
        c++;
        break;
      case 106:
        c++;
        break;
      case 107:
        c++;
        break;
      case 108:
        c++;
        break;
      case 109:
        c++;
        break;
      case 110:
        c++;
        break;
      case 111:
        c++;
        break;
      case 112:
        c++;
        break;
      case 113:
        c++;
        break;
      case 114:
        c++;
        break;
      case 115:
        c++;
        break;
      case 116:
        c++;
        break;
      case 117:
        c++;
        break;
      case 118:
        c++;
        break;
      case 119:
        c++;
        break;
      default:
        c--;
        break;
    }
  }
  return c;
}


int cover_swi50( int c )
{
  int i;

  #pragma loopbound min 50 max 50
  for ( i = 0; i < 50; i++ ) {
    switch ( i ) {
      case 0:
        c++;
        break;
      case 1:
        c++;
        break;
      case 2:
        c++;
        break;
      case 3:
        c++;
        break;
      case 4:
        c++;
        break;
      case 5:
        c++;
        break;
      case 6:
        c++;
        break;
      case 7:
        c++;
        break;
      case 8:
        c++;
        break;
      case 9:
        c++;
        break;
      case 10:
        c++;
        break;
      case 11:
        c++;
        break;
      case 12:
        c++;
        break;
      case 13:
        c++;
        break;
      case 14:
        c++;
        break;
      case 15:
        c++;
        break;
      case 16:
        c++;
        break;
      case 17:
        c++;
        break;
      case 18:
        c++;
        break;
      case 19:
        c++;
        break;
      case 20:
        c++;
        break;
      case 21:
        c++;
        break;
      case 22:
        c++;
        break;
      case 23:
        c++;
        break;
      case 24:
        c++;
        break;
      case 25:
        c++;
        break;
      case 26:
        c++;
        break;
      case 27:
        c++;
        break;
      case 28:
        c++;
        break;
      case 29:
        c++;
        break;
      case 30:
        c++;
        break;
      case 31:
        c++;
        break;
      case 32:
        c++;
        break;
      case 33:
        c++;
        break;
      case 34:
        c++;
        break;
      case 35:
        c++;
        break;
      case 36:
        c++;
        break;
      case 37:
        c++;
        break;
      case 38:
        c++;
        break;
      case 39:
        c++;
        break;
      case 40:
        c++;
        break;
      case 41:
        c++;
        break;
      case 42:
        c++;
        break;
      case 43:
        c++;
        break;
      case 44:
        c++;
        break;
      case 45:
        c++;
        break;
      case 46:
        c++;
        break;
      case 47:
        c++;
        break;
      case 48:
        c++;
        break;
      case 49:
        c++;
        break;
      case 50:
        c++;
        break;
      case 51:
        c++;
        break;
      case 52:
        c++;
        break;
      case 53:
        c++;
        break;
      case 54:
        c++;
        break;
      case 55:
        c++;
        break;
      case 56:
        c++;
        break;
      case 57:
        c++;
        break;
      case 58:
        c++;
        break;
      case 59:
        c++;
        break;
      default:
        c--;
        break;
    }
  }
  return c;
}


int cover_swi10( int c )
{
  int i;

  #pragma loopbound min 10 max 10
  for ( i = 0; i < 10; i++ ) {
    switch ( i ) {
      case 0:
        c++;
        break;
      case 1:
        c++;
        break;
      case 2:
        c++;
        break;
      case 3:
        c++;
        break;
      case 4:
        c++;
        break;
      case 5:
        c++;
        break;
      case 6:
        c++;
        break;
      case 7:
        c++;
        break;
      case 8:
        c++;
        break;
      case 9:
        c++;
        break;
      default:
        c--;
        break;
    }
  }
  return c;
}


void cover_main( void )
{
  #pragma entrypoint
  cover_cnt = cover_swi10( cover_cnt );

  cover_cnt = cover_swi50( cover_cnt );

  cover_cnt = cover_swi120( cover_cnt );
}


/*
  Main function
*/

int main( void )
{
  cover_init();
  cover_main();

  return cover_return();
}
