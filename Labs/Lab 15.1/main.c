#include <stdio.h>

int WordCounter( FILE* ) ;

int main() {
  char FileName[ 100 ] ;

  printf( "Input\n" ) ;
  printf( "Enter file name:\n" ) ;
  scanf( "%s" , FileName ) ;

  FILE * file = fopen( FileName , "r" ) ;

  if( file == NULL ) {
    printf( "Error openning file." ) ;
    return 0 ;
  }//end if

  int NumberOfWord = WordCounter( file ) ;

  fclose( file ) ;

  printf( "Total number of words in '%s' : %d words" , FileName , NumberOfWord ) ;

  return 0 ;
}//end main function

int WordCounter( FILE *file ) {
  int NumberOfWord = 0 ;
  char temp ;

  while( (temp = fgetc( file )) != EOF ) {
    if( temp == ' ' ) { 
      NumberOfWord++ ;
    }//end if
  }//end wile

  return ++NumberOfWord ;
}//end WordCounter function