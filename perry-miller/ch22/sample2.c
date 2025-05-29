#include <stdio.h>

int main ()
{
  int gameScores[10] = {12, 5, 21, 15, 32, 10, 6, 31, 11, 10};
  int gameRebounds[10] = {5, 7, 1, 5, 10, 3, 0, 7, 6, 4};
  int gameAssists[10] = {2, 9, 4, 3, 6, 1, 11, 6, 9, 10};
  int bestGame = 0;
  int gmMark = 0;
  int i;

  for (i = 0; i < 10; i++)
  {
    if (gameScores[i] > bestGame)
    {
      bestGame = gameScores[i];
      gmMark = i;
    }    
  }

  printf("\n\nThe player's best scoring game totals:\n");
  printf("The best game was game #%d\n", gmMark + 1);
  printf("Scored %d points\n", gameScores[gmMark]);
  printf("Grabbed %d rebounds\n", gameRebounds[gmMark]);
  printf("Dished %d assists\n", gameAssists[gmMark]);

  return (0);
  
}