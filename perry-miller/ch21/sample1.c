#include <stdio.h>

int main () {
  int gameScores[10] = {12, 5, 21, 15, 32, 10};
  int totalPoints;
  int i;
  float avg;

  totalPoints = 0;

  for (i = 6; i < 10; i++)
  {
    printf("What did the player score in game %d? ", i + 1);
    scanf(" %d", &gameScores[i]);
  }

  for (i = 0; i < 10; i++)
  {
    totalPoints += gameScores[i];
  }

  avg = (float) totalPoints / 10;

  printf("\n\nThe player's scoring average is: %.1f\n", avg);

  return (0);  
  
}