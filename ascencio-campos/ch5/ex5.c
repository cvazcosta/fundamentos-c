#include <stdio.h>

int main () {
  int prod;

  for (int i = 1; i <= 10; i++)
  {
    printf("\nTabuada de %d\n", i);
    for (int j = 0; j <= 10; j++)
    {
      prod = i * j;
      printf("%d x %d = %d\n", i, j, prod);      
    }    
  }
  
  return 0;
}