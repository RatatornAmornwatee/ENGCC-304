#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int IsPlaying = 0 ;
  int Guess = 0 ;
  int Target = 0 ;

  srand( time( NULL ) ) ;

  do {
    int Score = 100 ;

    printf( "Do you want to play game (1=play,-1=exit) :\n" ) ;
    scanf( "%d" , &IsPlaying ) ;
    printf( "\n" ) ;

    if( IsPlaying == 1 ) {
      Target = rand() % 100 + 1 ;

      while( Score > 0 ) {
        printf( "(Score=%d)\n\nGuess the winning number (1-100) :\n" , Score ) ;
        scanf( "%d" , &Guess ) ;
        printf( "\n" ) ;

        if( Guess > Target ) {
          Score -= 10 ;
          printf( "Sorry, the winning number is LOWER than %d." , Guess) ;
        }
        else if ( Guess < Target ) {
          Score -= 10 ;
          printf( "Sorry, the winning number is HIGHER than %d." , Guess) ;
        }
        else {
          printf( "That is correct! The winning number is %d.\nScore this game: %d\n\n" , Guess , Score ) ;
          break ;
        }//end if

      }//end while

    }//end if
  } while( IsPlaying == 1 ) ;

  printf( "See you again." ) ;

  return 0 ;
}//end main function