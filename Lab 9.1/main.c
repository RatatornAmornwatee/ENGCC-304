#include <stdio.h>

int main() {
  int N ;

  printf( "Enter N:\n" ) ;
  scanf( "%d" , &N ) ;

  int Arr[ N ] ;

  for( int i = 0 ; i < N ; i++ ) {
    printf( "Enter value[%d]:\n" , i ) ;
    scanf( "%d" , &Arr[i] ) ;
  }

  printf( "Index: " ) ;
  for( int i = 1 ; i <= N ; i++ ) {
    printf( "%2d " , i ) ;
  }

  printf( "\nArray: " ) ;
  for( int i = 0 ; i < N ; i++ ) {
    int j = 2 ;
    for( ; j * j <= Arr[ i ] ; j++ ) {
      if( Arr[i] % j == 0 ) break ;
    }

    if( j * j > Arr[ i ] ) printf( "%2d " , Arr[i] ) ;
    else printf( "%2c " , '#' ) ;
  }//end for

  return 0 ;
}//end main function