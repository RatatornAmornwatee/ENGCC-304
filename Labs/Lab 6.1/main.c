#include <stdio.h>
#include <string.h>

void Ten( char[] , char , char ) ;
void Units( char[] , char ) ;

int main() {
  char Number[ 10 ] ;
  char String[ 100 ] = "" ;
  int Size = 0 ;

  printf( "User Input :"  ) ;
  scanf( "%s" , Number ) ;

  if( strlen( Number ) > 3 ) {
    printf( "Sorry, the range of this code is between 1 - 999" ) ;
    return 0 ;
  }//end if

  if( strlen( Number ) == 3 ) {
    if ( Number[ 0 ] != '0' ) {
      char Temp[ 10 ] ;
      Units( String , Number[ 0 ] ) ;
      strcat( String , " hundred" );
      strcat( String , " " ) ;
    }//end if
    Ten( String , Number[ 1 ] , Number[ 2 ] ) ;
  }//end if

  if( strlen( Number ) == 2 ) {
    Ten( String , Number[ 0 ] , Number[ 1 ] ) ;
  }//end if

  if( strlen( Number ) == 1 ) {
    Units( String , Number[ 0 ] ) ;
  }//end if

  printf("%s",String);

  return 0 ;
}//end main function

void Ten(  char Str[] , char ten , char unit ) {
  if ( ten != '0' ) {
    if( ten == '1' ) {
      switch( unit ) {
        case( '0' ) : strcat( Str , "ten" ) ; return ;
        case( '1' ) : strcat( Str , "eleven" ) ; return ;
        case( '2' ) : strcat( Str , "twelve" ) ; return ;
        case( '3' ) : strcat( Str , "thirteen" ) ; return ;
        case( '4' ) : strcat( Str , "fourteen" ) ; return ;
        case( '5' ) : strcat( Str , "fifteen" ) ; return ;
        case( '6' ) : strcat( Str , "sixteen" ) ; return ;
        case( '7' ) : strcat( Str , "seventeen" ) ; return ;
        case( '8' ) : strcat( Str , "eighteen" ) ; return ;
        case( '9' ) : strcat( Str , "nineteen" ) ; return ;
      }//end switch case
    }//end if
    else if ( ten == '2' ) { strcat( Str , "twenty" ) ; }
    else if ( ten == '3' ) { strcat( Str , "thirty" ) ; }
    else if ( ten == '4' ) { strcat( Str , "fourty" ) ; }
    else if ( ten == '5' ) { strcat( Str , "fifty" ) ; }
    else if ( ten == '6' ) { strcat( Str , "sixty" ) ; }
    else if ( ten == '7' ) { strcat( Str , "seventy" ) ; }
    else if ( ten == '8' ) { strcat( Str , "eighty" ) ; }
    else if ( ten == '9' ) { strcat( Str , "ninety" ) ; }

    if ( unit == '0' ) return ;
    
    strcat( Str , "-" ) ;
    Units( Str , unit ) ;
  } 
  else {
    Units( Str , unit ) ;
  }//end if
}//end Ten function

void Units( char Str[] , char Number ) {
  switch( Number ) {
    case( '0' ) : strcat( Str , "zero" ) ; break ;
    case( '1' ) : strcat( Str , "one" ) ; break ;
    case( '2' ) : strcat( Str , "two" ) ; break ;
    case( '3' ) : strcat( Str , "three" ) ; break ;
    case( '4' ) : strcat( Str , "four" ) ; break ;
    case( '5' ) : strcat( Str , "five" ) ; break ;
    case( '6' ) : strcat( Str , "six" ) ; break ;
    case( '7' ) : strcat( Str , "seven" ) ; break ;
    case( '8' ) : strcat( Str , "eight" ) ; break ;
    case( '9' ) : strcat( Str , "nine" ) ; break ;
  }//end switch case
}//end Units function