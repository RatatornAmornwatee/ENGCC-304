#include <stdio.h>

int main() {
  int num ;
  int result = 0;

  scanf( "%d" , &num ) ;
  result += num ;

  scanf( "%d" , &num ) ;
  result += num ;

  scanf( "%d" , &num ) ;
  result += num ;

  printf( "Answer = %d" , result ) ;

  return 0 ;
}//end main function