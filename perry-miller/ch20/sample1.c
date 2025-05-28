#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>

int main () 
{
  int dice1, dice2;
  int total1, total2;
  time_t t;
  char ans;

  srand(time(&t));

  dice1 = (rand() % 5) + 1;
  dice2 = (rand() % 5) + 1;
  total1 = dice1 + dice2;

  printf("First roll of the dice was %d and %d, ", dice1, dice2);
  printf("for a total of %d.\n\n\n", total1);

  do
  {
    puts("Do you think the next roll will be ");
    puts("(H)igher, (L)ower, or (S)ame\n");
    puts("Enter H, L or S to reflect your guess.");
    scanf(" %c", &ans);
    ans = toupper(ans);
  } while ((ans != 'H') && (ans != 'L') && (ans != 'S'));

  // Rolling the dice for the 2nd time
  dice1 = (rand() % 5) + 1;
  dice2 = (rand() % 5) + 1;
  total2 = dice1 + dice2;

  printf("Second roll of the dice was %d and %d, ", dice1, dice2);
  printf("for a total of %d.\n\n\n", total2);
  
  // Comparing the results
  if (ans == 'L')
  {
    if (total2 < total1)
    {
      printf("Good job! You were right!\n");
      printf("%d is lower than %d\n", total2, total1);
    } else
    {
      printf("Sorry! %d is not lower than %d\n", total2, total1);
    }    
  } else if (ans == 'H')
  {
    if (total2 > total1)
    {
      printf("Good job! You were right!\n");
      printf("%d is higher than %d\n", total2, total1);
    } else
    {
      printf("Sorry! %d is not higher than %d\n", total2, total1);
    }    
  } else
  {
    if (total2 == total1)
    {
      printf("Good job! You were right!\n");
      printf("%d is the same as %d\n", total2, total1);
    } else
    {
      printf("Sorry! %d is not the same as %d\n", total2, total1);
    }    
  }  

  return (0);
}