#include <stdio.h>
#include <string.h>

struct Book{
  char ID[ 100 ] ;
  char Title[ 100 ] ;
  char Author[ 100 ] ;
  int Year ;
} typedef Book ;

void addBook(Book[], int*) ;
void searchBook(Book[], int, char[] ) ;
void displayBooks(Book[], int ) ;
void printBook( Book ) ;

int main() {
  Book Books[ 100 ] ;
  int Option = 0 ;
  int Count = 0 ;
  
  printf( "Choose an option: " ) ;
  scanf( "%d" , &Option ) ;

  switch( Option ) {
    case( 1 ) : {
      addBook( Books , &Count ) ;
      break ;
    }
    case( 2 ) : {
      char Title[ 100 ] ;
      printf( "Enter Title to Search: " ) ;
      scanf( " %[^\n]s" , Title ) ;
      searchBook( Books , Count , Title ) ;
      break ;
    }
    case( 3 ) : {
      displayBooks( Books , Count ) ;
      break ;
    }
  }//end switch case

}//end main function

void addBook( Book books[] , int *count ) { 
  printf( "Enter Book ID: " ) ;
  scanf( "%s" , books[ *count ].ID ) ;
  
  printf( "Enter Title: " ) ;
  scanf( " %[^\n]s" , books[ *count ].Title ) ;

  printf( "Enter Author: ") ;
  scanf( " %[^\n]s" , books[ *count ].Author ) ;

  printf( "Enter Year: " ) ;
  scanf( "%d" , &books[ *count ].Year ) ;
  
  printf( "Book added successfully!\n" ) ;

  *count += 1 ;
}//end addBook function

void searchBook( Book books[] , int count , char title[] ) {
  for( int i = 0 ; i < count ; i++ ) {
    if( strcmp( title , books[ i ].Title ) ) {
      printBook( books[ i ] ) ;
      break ;
    }//end if
    printf( "Book not found.\n" ) ;
  }//end for
}//end searchBook function

void displayBooks( Book books[] , int count ) {
  for( int i = 0 ; i < count ; i++ ) {
    printBook( books[ i ] ) ;
  }//end for
}//end displayBooks function

void printBook( Book book ) {
  printf(
    "Book ID: %s\nTitle: %s\nAuthor: %s\nYear: %d\n" ,
    book.ID ,
    book.Title ,
    book.Author ,
    book.Year
  );
}//end printBooks function