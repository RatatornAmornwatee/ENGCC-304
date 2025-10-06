#include <stdio.h>
#include <string.h>

int pow( int x , int y) {
  int result = 1 ;

  while( y > 0 ) {
    result *= x ;
    y-- ;
  }//end while

  return result ;
}//end pow function

void IsArmstrong( char Num[] ) {
  int len = strlen( Num ) ;
  int Armstrong = 0 ;
  int StrArmstrong = 0 ;
  int i = 0 ;

  for( i = 0 ; i < len ; i++ ) {
    Armstrong += pow( Num[ i ] - '0' , len ) ;
    StrArmstrong += ( Num[ i ] - '0' ) * pow( 10 , len - i - 1 ) ;
  }//end for

  if( Armstrong != StrArmstrong ) printf( "Not Pass." ) ;
  else printf( "Pass." ) ;
}//end IsArmstorng function

int main() {
  char Num[] = {} ;

  printf( "Enter Number:\n" ) ;
  scanf( "%s" , Num ) ;

  IsArmstrong( Num ) ;

  return 0 ;
}//end main function