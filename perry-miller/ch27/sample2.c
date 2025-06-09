#include "bookInfo.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
  int ctr;
  struct bookInfo * books[3]; // Array de pointers de bookInfo

  for (ctr = 0; ctr < 3; ctr++)
  {
    books[ctr] = (struct bookInfo *) malloc(sizeof(struct bookInfo));

    printf("What's the name of the book #%d?\n", (ctr + 1));
    gets(books[ctr]->title);
    puts("Who's the author?");
    gets(books[ctr]->author);
    puts("How much did the book cost?");
    scanf(" %f", &books[ctr]->price);
    puts("How many pages in the book? ");
    scanf(" %d", &books[ctr]->pages);
    getchar();
  }

  printf("\n\nHere is the collection of books: \n");
  for (ctr = 0; ctr < 3; ctr++)
  {
    printf("#%d: %s by %s", (ctr + 1), books[ctr]->title, books[ctr]->author);
    printf("\nIt is %d pages and costs $%.2f\n\n", 
      books[ctr]->pages, books[ctr]->price);
  }
  
  return (0);

}