#include "../ch27/bookInfo.h"
#include <stdio.h>
#include <stdlib.h>
FILE * fptr;

int main(void)
{
  int ctr;
  struct bookInfo books[3];

  for (ctr = 0; ctr < 3; ctr++)
  {
    printf("What is the name of the book #%d?\n", (ctr + 1));
    gets(books[ctr].title);
    puts("Who is the author? ");
    gets(books[ctr].author);
    puts("How much did the book cost? ");
    scanf(" %f", &books[ctr].price);
    puts("How many pages in the book? ");
    scanf(" %d", &books[ctr].pages);
    getchar(); // Clears last newline for next loop
  }

  fptr = fopen("./BookInfo.txt", "w");

  if (fptr == 0)
  {
    puts("Error--file could not be opened.");
    exit(1);
  }

  fprintf(fptr, "\n\nHere is the collection of books: \n");
  for (ctr = 0; ctr < 3; ctr++)
  {
    fprintf(fptr, "#%d: %s by %s\n", 
      (ctr + 1), books[ctr].title, books[ctr].author
    );
    fprintf(fptr, "It is %d pages and cost $%.2f", 
      books[ctr].pages, books[ctr].price
    );
    fprintf(fptr, "\n\n");
  }

  fclose(fptr);
  
  return 0;

}