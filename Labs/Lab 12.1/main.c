#include <stdio.h>
#include <string.h>

struct Student {
  char Name[20] ;
  char ID[5] ;
  float ScoreSub1 ;
  float ScoreSub2 ;
  float ScoreSub3 ;
  float ScoreSub4 ;
  float ScoreSub5 ;
} typedef S ;

void Grade( int Score ) {
  if ( Score >= 80 ) printf( "A " ) ;
  else if ( Score >= 75 && Score < 80 ) printf( "B+ " ) ;
  else if ( Score >= 70 && Score < 75 ) printf( "B " ) ;
  else if ( Score >= 65 && Score < 70 ) printf( "C+ " ) ;
  else if ( Score >= 60 && Score < 65 ) printf( "C " ) ;
  else if ( Score >= 55 && Score < 60 ) printf( "D+ " ) ;
  else if ( Score >= 50 && Score < 55 ) printf( "D " ) ;
  else if ( Score >= 0 && Score < 50 ) printf( "F " ) ;
}//end Grade function

float Average( int S1 , int S2 , int S3 , int S4 , int S5 ) {
  return ( S1 + S2 + S3 + S4 + S5 ) / 5 ;
}//end Average function

int main() {
  S Students[ 3 ] ;

  printf( "Enter the details of 3 students :\n" ) ;
  for( int i = 0 ; i < 3 ; i++ ) {
    printf( "Student %d:\n" , i + 1 ) ;
    printf( "Name:\n" ) ;
    scanf( " %[^\n]s" , Students[ i ].Name ) ;
    
    printf( "ID:\n" ) ;
    scanf( "%s" , Students[ i ].ID ) ;

    printf( "Score in Subject 1:\n" ) ;
    scanf( "%f" , &Students[ i ].ScoreSub1 ) ;
    printf( "Score in Subject 2:\n" ) ;
    scanf( "%f" , &Students[ i ].ScoreSub2 ) ;
    printf( "Score in Subject 3:\n" ) ;
    scanf( "%f" , &Students[ i ].ScoreSub3 ) ;
    printf( "Score in Subject 4:\n" ) ;
    scanf( "%f" , &Students[ i ].ScoreSub4 ) ;
    printf( "Score in Subject 5:\n" ) ;
    scanf( "%f" , &Students[ i ].ScoreSub5 ) ;
    printf( "\n" ) ;
  }//end for

  for( int i = 0 ; i < 3 ; i++ ) {
    printf( "\nStudent %d:\nName: %s\nID: %s\nScore: %.0f %.0f %.0f %.0f %.0f\n" , 
      i + 1 , 
      Students[ i ].Name ,
      Students[ i ].ID ,
      Students[ i ].ScoreSub1 ,
      Students[ i ].ScoreSub2 ,
      Students[ i ].ScoreSub3 ,
      Students[ i ].ScoreSub4 ,
      Students[ i ].ScoreSub5
    ) ;
    printf( "Grade: ") ;
    Grade( Students[ i ].ScoreSub1 ) ;
    Grade( Students[ i ].ScoreSub2 ) ;
    Grade( Students[ i ].ScoreSub3 ) ;
    Grade( Students[ i ].ScoreSub4 ) ;
    Grade( Students[ i ].ScoreSub5 ) ;
    printf( "\n" ) ;
    printf( "Average Scores: %.1f\n" , 
      Average(
        Students[ i ].ScoreSub1,
        Students[ i ].ScoreSub2,
        Students[ i ].ScoreSub3,
        Students[ i ].ScoreSub4,
        Students[ i ].ScoreSub5
      )
    );
  }//end for
}//end main function