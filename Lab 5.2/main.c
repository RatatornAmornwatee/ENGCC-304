#include <stdio.h>

int main() {
  int Score = -1;

  printf( "enter score :\n" ) ;
  scanf( "%d" , &Score ) ;

  if ( Score >= 80 ) printf( "A !" ) ;
  else if ( Score >= 75 && Score < 80 ) printf( "B+ !" ) ;
  else if ( Score >= 70 && Score < 75 ) printf( "B !" ) ;
  else if ( Score >= 65 && Score < 70 ) printf( "C+ !" ) ;
  else if ( Score >= 60 && Score < 65 ) printf( "C !" ) ;
  else if ( Score >= 55 && Score < 60 ) printf( "D+ !" ) ;
  else if ( Score >= 50 && Score < 55 ) printf( "D !" ) ;
  else if ( Score >= 0 && Score < 50 ) printf( "F !" ) ;
  else printf( "please enter number only." ) ;
}