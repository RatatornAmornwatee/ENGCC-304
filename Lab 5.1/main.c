#include <stdio.h>
#include <string.h>

int main() {
  char ID[10] ;
  int WorkingHrs ;
  float SalaryHrs ;
  float Salary ;
  char SalaryChar[] = {} ;

  printf( "Input the Employees ID(Max. 10 chars):\n" ) ;
  scanf( "%s" , ID ) ;

  printf( "Input the working hrs:\n" ) ;
  scanf( "%d" , &WorkingHrs ) ;

  printf( "Salary amount/hr:\n" ) ;
  scanf( "%f" , &SalaryHrs ) ;

  Salary = WorkingHrs * SalaryHrs ;
  sprintf( SalaryChar , "%.2f" , Salary ) ;
  //NOT FINISH YET
}//end main function