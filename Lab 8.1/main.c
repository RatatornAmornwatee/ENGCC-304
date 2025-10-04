#include <stdio.h>

int main() {
  int Position = 0 ;
  int Experience = 0 ;
  int Project = 0 ;

  int Salary = 0 ;
  int ExperienceBonus = 0 ;
  int SpecialBonus = 0 ;

  printf( "Position: " ) ;
  scanf( "%d" , &Position ) ;

  printf( "Years of Experience: " ) ;
  scanf( "%d" , &Experience ) ;

  printf( "Number of Projects Completed this Year: " ) ;
  scanf( "%d" , &Project ) ;

  if( Position == 1 ) Salary = 20000 ;
  else if( Position == 2 ) Salary = 35000 ;
  else if( Position == 3 ) Salary = 50000 ;

  if( Experience > 5 ) ExperienceBonus = Salary * 0.2 ;
  else if( Experience > 4 ) ExperienceBonus = Salary * 0.15 ;
  else ( ExperienceBonus ) = Salary * 0.1 ;

  if( Project > 5 ) SpecialBonus = Salary * 0.05 ;

  printf( "Base Salary: %d THB\nExperience Bonus: %d THB\nSpecial Bonus: %d THB\nNet Salary: %d THB" , Salary , ExperienceBonus , SpecialBonus , Salary + ExperienceBonus +  SpecialBonus ) ;

  return 0 ;
}//end main function