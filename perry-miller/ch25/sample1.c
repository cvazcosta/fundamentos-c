#include <stdio.h>
#include <ctype.h>

int main () 
{
  int i;
  int ctr = 0;
  char ans;

  char * movies[9] = {"Amour", "Argo", "Beasts of the Southern Wild", "Django", 
  "Les Miserables", "Life of Pi", "Lincoln", "Silver Linings Playbook", 
  "Zero Dark Thirty"};

  int movieRatings[9];

  char * tempMovie = "This will be used to sort rated movies";
  int outer, inner, didSwap, tempRating;

  printf("\n\n*** Oscar Season is here! ***\n\n");

  // Coletando as notas dos filmes assistidos
  for (i = 0; i < 9; i++)
  {
    printf("\nDid you see %s? (Y/N): ", movies[i]);
    scanf(" %c", &ans);

    if ((toupper(ans)) == 'Y')
    {
      printf("What was your rating on a scale of 1-10: ");
      scanf(" %d", &movieRatings[i]);
      ctr++;
      continue;
    } else
    {
      movieRatings[i] = -1;
    }    
  }

  // Loop de execução da técnica de Bubble Sort
  for (outer = 0; outer < 8; outer++)
  {
    didSwap = 0;
    for (inner = outer + 1; inner < 9; inner++)
    {
      if (movieRatings[inner] > movieRatings[outer])
      {
        tempMovie = movies[inner];
        tempRating = movieRatings[inner];

        movies[inner] = movies[outer];
        movieRatings[inner] = movieRatings[outer];

        movies[outer] = tempMovie;
        movieRatings[outer] = tempRating;

        didSwap = 1;
      }      
    }    
    if (didSwap == 0)
    {
      break;
    }
  } 

  printf("\n\n** Your movie ratings for the Oscar contenders **\n\n");

  // Imprimindo apenas os filmes que receberam notas
  for (i = 0; i < ctr; i++)
  {
    printf("%s rated a %d!\n", movies[i], movieRatings[i]);
  }   

  return (0);

}