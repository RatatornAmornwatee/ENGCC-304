#include <stdio.h>

int main() {
  int Days = 0 ;
  int Seconds = 0 ;

  printf( "Input Days : " ) ;
  scanf( "%d" , &Days ) ;

  Seconds = Days * 24 * 60 * 60 ;

  printf( "%d days = %d seconds" , Days , Seconds ) ;
}//end main function