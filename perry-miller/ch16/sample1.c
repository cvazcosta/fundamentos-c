#include <stdio.h>

int main () {
  int numTest;
  float stTest, avg, total = 0.0;

  for (numTest = 0; numTest < 25; numTest++)
  {
    printf("What is the next student's test score? ");
    scanf(" %f", &stTest);

    if (stTest < 0.0)
    {
      break;
    }
    total += stTest;
  }
  
  avg = total / numTest;
  printf("The average is %.1f%%.\n", avg);

  return 0;
}