#include <stdio.h>
#include <string.h>

void GetStringFromFile( char[] , char[] ) ;
int WordCounter( char[] ) ;

int main() {
  char FileName[] = {} ;
  char FileInfo[] = {} ;

  printf( "Input\n" ) ;
  printf( "Enter file name:\n" ) ;
  scanf( "%s" , FileName ) ;

  printf( "Total number of words in '%s' : " ) ;

  GetStringFromFile( FileInfo , FileName ) ;
  int NumberOfWord = WordCounter( FileInfo ) ;
  
  printf( "%d words" , NumberOfWord ) ;

  return 0 ;
}//end main function

void GetStringFromFile( char FileInfo[] , char FileName[] ) {
  FILE * file ;
  file = fopen( FileName , "r" ) ;

  fseek( file , 0 , SEEK_END ) ;
  long Size = ftell( file ) ;

  fseek( file , 0 , SEEK_SET ) ;
  fgets( FileName , Size , file ) ;

  fclose( file ) ;
}//end getStrFromFile function

int WordCounter( char FileInfo[] ) {
  int NumberOfWord = 0 ;

  for( int i = 0 ; i < strlen( FileInfo ) + 1 ; i++ ) {
    if( FileInfo[ i ] == ' ' || FileInfo[ i ] == '\0' ) { 
      NumberOfWord++ ;
    }//end if
  }//end for

  return NumberOfWord ;
}//end WordCounter function