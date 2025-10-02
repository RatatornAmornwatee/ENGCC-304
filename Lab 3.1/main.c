#include <stdio.h>

int main() {
  float H = 0 ;
  float W = 0 ;
  float Area = 0 ;

  printf( "H = " );
  scanf( "%f" , &H );

  printf( "W = " );
  scanf( "%f" , &W );

  Area = ( H * W ) / 2 ;

  printf( "Area = %.1f" , Area ) ;
}//end main functionls