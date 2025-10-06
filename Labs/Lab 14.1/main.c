#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int ValueToInt( char[] , int[] ) ;
int Max( int[] , int ) ;
int Min( int[] , int  ) ;

void PrintArray( int[] ,int ) ;

int main() {
  char StrValues[] = {} ;
  int Values[ 20 ] ;
  int Size = 0 ;
  int MinValue = 0 ;
  int MaxValue = 0 ;

  printf( "Enter value:\n" ) ;
  scanf( "%[^\n]s" , StrValues ) ;

  Size = ValueToInt( StrValues , Values ) ;
  MinValue = Min( Values , Size ) ;
  MaxValue = Max( Values , Size ) ;

  PrintArray( Values , Size ) ;
  printf( "\nMin:%d" , MinValue ) ;
  printf( "\nMax:%d" , MaxValue ) ;

  return 0 ;
}//end main function

int ValueToInt( char StrValues[] , int Values[] ) {
  char Stack[ 20 ] = {} ;
  int Size = 0 ;
  
  for( int i = 0 ; i < strlen( StrValues ) + 1 ; i++ ) {
    if( StrValues[ i ] == ' ' || StrValues[ i ] == '\0' ) {
      Values[ Size ]  = atoi( Stack ) ;
      Size++ ;
      strcpy( Stack , "" ) ;
      continue ;
    }//end if

    sprintf( Stack , "%s%c" , Stack , StrValues[i] ) ;
  }//end while

  return Size ;
}//end ValueToInt function

int Max( int Values[] , int Size ) {
  int Result = Values[ 0 ] ;
  int i = 0 ;

  for( int i = 0 ; i < Size ; i++ ) {
    if( Values[ i ] > Result ) {
      Result = Values[ i ] ;
    }//end if
  }//end while
  return Result ;
}//end Max function

int Min( int Values[]  , int Size ) {
  int Result = Values[ 0 ] ;

  for( int i = 0 ; i < Size ; i++ ) {
    if( Values[ i ] < Result ) {
      Result = Values[ i ] ;
    }//end if
  }//end while
  return Result ;
}//end Min function

void PrintArray( int Values[] , int Size) {
  printf( "Index: " ) ;
  for( int i = 0 ; i < Size ; i++ ) {
    printf( "%d " , i ) ;
  }//end fpr
  printf( "\n" ) ;

  printf( "Array: " ) ;
  for( int i = 0 ; i < Size ; i++ ) {
    printf( "%d " , Values[i] ) ;
  }//end fpr
  printf( "\n" ) ;
}//end PrintArray function