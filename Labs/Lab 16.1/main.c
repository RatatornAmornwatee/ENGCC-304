#include <stdio.h>

int main() {
  int OldSeries[ 7 ] = { 15, 7, 25, 3, 73, 32, 45 } ;
  int NewSeries[ 7 ]  = { 15, 7, 25, 3, 73, 32, 45 }  ;
  int Pos32 = 0 ;
  int i = 0 , j = 0 ;

  for( i = 0 ; i < 7 ; i++ ) {
    for( j = i ; j < 7 ; j++ ) {
      if ( NewSeries[ j ] == 32 ) Pos32 = i ;
      if( NewSeries[ j ] < NewSeries[ i ] ) {
        NewSeries[ i ] = NewSeries[ i ] + NewSeries[ j ] ;
        NewSeries[ j ] = NewSeries[ i ] - NewSeries[ j ] ;
        NewSeries[ i ] = NewSeries[ i ] - NewSeries[ j ] ;
      }//end if
    }//end for
  }//end for

  printf( "Old Series : " ) ;
  for( i = 0 ; i < 6 ; i++ ) {
    printf( "%d, " , OldSeries[ i ] ) ;
  }//end for
  printf( "%d\n" , OldSeries[ i ] ) ;

  printf( "New Series : " ) ;
  for( i = 0 ; i < 6 ; i++ ) {
    printf( "%d, " , NewSeries[ i ] ) ;
  }//end for
  printf( "%d\n" , NewSeries[ i ] ) ;

  printf( "Pos of 32: %d" , Pos32 ) ;

  return 0 ;
}//end main function