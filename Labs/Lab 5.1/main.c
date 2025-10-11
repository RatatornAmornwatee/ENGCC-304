#include <stdio.h>
#include <string.h>

int main() {
  char ID[10] ;
  float WoringHrs = 0 ;
  float SalaryPerHr = 0 ;
  float Salary = 0 ;
  float Digit = 0 ;

  char Temporary[ 100 ] ;
  char Separated[ 100 ] ;
  int i = 0 ;
  int j = 0 ;
  int Size ;

  printf( "Input the Employees ID(Max. 10 chars): " ) ;
  scanf( "%s" , ID ) ;

  printf( "Input the working hrs: " ) ;
  scanf( "%f" , &WoringHrs ) ;

  printf( "Salary amount/hr: " ) ;
  scanf( "%f" , &SalaryPerHr ) ;

  Salary = WoringHrs * SalaryPerHr ;

  if( Salary < 0 ) {
    printf("input error ,try agin!") ;
  }//end if

  sprintf( Temporary , "%.0f" , Salary ) ;
  Size = strlen( Temporary ) ;

  for( i = 0 ; i < ( Size % 3 ) ; i++ ) {
    Separated[ j++ ] = Temporary[ i ] ;
  }//end for

  while( i < Size ) {
    if ( j > 0 && i < Size ) Separated[ j++ ] = ',' ;

    for( int k = 0 ; k < 3 ; k++ ) {
      Separated[ j++ ] = Temporary[ i++ ] ;
    }//end for
  }//end while
  Separated[ j ] = '\0' ;
  Digit = Salary;
  Digit -= (int)Salary;

  sprintf( Separated , "%s.%02d" , Separated , Digit ) ;

  printf( "----\n" ) ;
  printf( "Expected Output:\n" ) ;
  printf( "Employees ID = %s\n" , ID ) ;
  printf( "Salary = U$ %s\n" , Separated ) ;

  return 0 ;
}//end main function