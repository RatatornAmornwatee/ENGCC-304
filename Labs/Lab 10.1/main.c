#include <stdio.h>
#include <string.h>

void IsPalindrome( char Text[] ) {
  if ( strlen( Text) % 2 == 0 ) {
    printf( "Not Pass." ) ;
    return ;
  }//end if
  
  int i = 0 ;
  int j = strlen( Text ) - 1 ;

  while( i != j ) {
    if ( Text[i] != Text[j] ){
      printf( "Not Pass." ) ;
      return ;
    }
    i++ ;
    j-- ;
  }//end while
  printf( "Pass." ) ;
}//end IsPalindrome function

int main() {
  char Text[] = {} ;

  printf( "Enter word:\n" ) ;
  scanf( "%s" , Text ) ;

  IsPalindrome( Text ) ;

  return 0 ;
}//end main function