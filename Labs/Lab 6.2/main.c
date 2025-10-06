#include <stdio.h>

int main() {
  int Number ;

  printf( "Enter value:\n" ) ;
  scanf( "%d" , &Number ) ;

  if( Number % 2 == 0 ) {
    for( int i = Number ; i >= 0 ; i -= 2 ) {
      printf( "%d " , i ) ;
    }
  }
  else {
    for( int i = 1 ; i <= Number ; i += 2 ) {
      printf( "%d " , i ) ;
    }
  }

  return 0 ;
}//end main function