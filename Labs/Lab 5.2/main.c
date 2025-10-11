#include <stdio.h>

int main() {
  int Score = -1;

  printf( "enter score :\n" ) ;
  scanf( "%d" , &Score ) ;

  if ( Score >= 80 ) printf( "A !" ) ;
  else if ( Score >= 75 ) printf( "B+ !" ) ;
  else if ( Score >= 70 ) printf( "B !" ) ;
  else if ( Score >= 65 ) printf( "C+ !" ) ;
  else if ( Score >= 60 ) printf( "C !" ) ;
  else if ( Score >= 55 ) printf( "D+ !" ) ;
  else if ( Score >= 50 ) printf( "D !" ) ;
  else if ( Score >= 0 ) printf( "F !" ) ;
  else printf( "please enter number only." ) ;
}//end main function