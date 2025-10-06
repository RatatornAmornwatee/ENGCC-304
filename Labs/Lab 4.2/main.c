#include <stdio.h>

int main() {
  char ID[10] ;
  int WorkingHrs ;
  float SalaryHrs ;
  float Salary ;

  printf( "Input the Employees ID(Max. 10 chars):\n" ) ;
  scanf( "%s" , ID ) ;

  printf( "Input the working hrs:\n" ) ;
  scanf( "%d" , &WorkingHrs ) ;

  printf( "Salary amount/hr:\n" ) ;
  scanf( "%f" , &SalaryHrs ) ;

  Salary = WorkingHrs * SalaryHrs ;

  printf( "Expected Output:\nEmployees ID = %s\nSalary = U$%.2f" , ID , Salary ) ;

  return 0 ;
}//end main function