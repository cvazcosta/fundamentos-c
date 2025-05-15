#include <stdio.h>
#include <string.h>

int main () {
  int ctr, numMovies, rating, favRating, leastRating;
  char movieName[40], favorite[40], least[40];

  favRating = 0;
  leastRating = 10;

  do
  {
    printf("How many movies have you seen this year? ");
    scanf(" %d", &numMovies);
    if (numMovies < 1)
    {
      printf("No movies! How can you rank them?\nTry again!");
    }
  } while (numMovies < 1);

  for (ctr = 1; ctr <= numMovies; ctr++)
  {
    printf("What's the name of the movie? ");
    scanf(" %s", movieName);

    printf("Rate it 1 - 10: ");
    scanf(" %d", &rating);

    if (rating > favRating)
    {
      strcpy(favorite, movieName);
      favRating = rating;
    }

    if (rating < leastRating)
    {
      strcpy(least, movieName);
      leastRating = rating;
    }    
  }
  
  printf("Your favorite movie was: %s\n", favorite);
  printf("Your least favorite movie was: %s\n", least);

  return 0;  
}