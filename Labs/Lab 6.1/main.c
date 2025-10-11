#include <stdio.h>
#include <string.h>

void SingleUnit( char[] , int ) ;

int main() {
  char Number[] = {} ;
  char String[] = {} ;
  int Size = 0 ;

  printf( "User Input :" ) ;
  scanf( "%s" , &Number ) ;
  Size = strlen( Number ) ;

  // if( Size == 7 ) {
    
  // }
  // else if( Size == 6 ) {

  // }
  // else if( Size == 5 ) {

  // }
  // else if( Size == 4 ) {

  // }
  // else if( Size == 3 ) {

  // }
  // else if( Size == 2 ) {

  // }
  // else if( Size == 1 ) {

  // }

  char Temp[] = {} ;
  SingleUnit( Temp , Number[0] ) ;
  printf( "%s" , Temp ) ;

  return 0 ;
}//end main function

void SingleUnit( char String[] , int Number ) { 
  switch( Number ) {
    case( 1 ) : strcpy( String , "one" ) ; break ;
    case( 2 ) : strcpy( String , "two" ) ; break ;
    case( 3 ) : strcpy( String , "three" ) ; break ;
    case( 4 ) : strcpy( String , "four" ) ; break ;
    case( 5 ) : strcpy( String , "five" ) ; break ;
    case( 6 ) : strcpy( String , "six" ) ; break ;
    case( 7 ) : strcpy( String , "seven" ) ; break ;
    case( 8 ) : strcpy( String , "eight" ) ; break ;
    case( 9 ) : strcpy( String , "nine" ) ; break ;
  }
}//end main function