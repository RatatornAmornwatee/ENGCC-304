#include <stdio.h>

void swapNumbers( int *ptr1 , int *ptr2 ) {
  *ptr1 = *ptr1 + *ptr2 ;
  *ptr2 = *ptr1 - *ptr2 ;
  *ptr1 = *ptr1 - *ptr2 ;
}//end swapNumbers function

int main() {
  int num1 , num2 ;

  printf( "Enter num1 :\n" ) ;
  scanf( "%d" , &num1 ) ;

  printf( "Enter num2 :\n" ) ;
  scanf( "%d" , &num2 ) ;

  int *ptr1 = &num1 ;
  int *ptr2 = &num2 ;

  printf( "Before swap (num1 & num2) : %d, %d\n" , num1 , num2 );

  swapNumbers( ptr1 , ptr2 ) ;

  printf( "After swap (num1 & num2) : %d, %d" , *ptr1 , *ptr2 ) ;

  return 0 ;
}//end main function