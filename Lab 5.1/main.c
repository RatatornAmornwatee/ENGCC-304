#include <stdio.h>
#include <string.h>

int main() {
  char ID[10] ;
  int WorkingHrs ;
  float SalaryHrs ;
  float Salary ;
  char SalaryComma[] = {} ;

  printf( "Input the Employees ID(Max. 10 chars):\n" ) ;
  scanf( "%s" , ID ) ;

  printf( "Input the working hrs:\n" ) ;
  scanf( "%d" , &WorkingHrs ) ;

  printf( "Salary amount/hr:\n" ) ;
  scanf( "%f" , &SalaryHrs ) ;

  Salary = WorkingHrs * SalaryHrs ;
  sprintf( SalaryComma , "%.2f" , Salary ) ;

  for( int i = 0 ; i < strlen( SalaryComma ) ; i++ ) {
    printf( "%c" , SalaryComma[ i ] ) ;
  }
  //NOT FINISH YET
}//end main function