#include <stdio.h>
#include <string.h>

int main() {
  char ID[10] ;
  int WorkingHrs ;
  int SalaryHrs ;
  float Salary ;
  char SalaryStr[] = {} ;

  printf( "Input the Employees ID(Max. 10 chars): " ) ;
  scanf( "%s" , ID ) ;

  printf( "Input the working hrs: " ) ;
  scanf( "%d" , &WorkingHrs ) ;

  printf( "Salary amount/hr: " ) ;
  scanf( "%d" , &SalaryHrs ) ;

  Salary = WorkingHrs * SalaryHrs ;
  sprintf( SalaryStr , "%.2f" , Salary ) ;

  int Comma = 3 ;
  for( int i = 0 ; i < strlen( SalaryStr ) ; i++ ) {
    
  }
  //NOT FINISH YET
}//end main function