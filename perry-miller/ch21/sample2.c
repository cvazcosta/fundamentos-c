#include <stdio.h>

int main()
{
  int num[10] ={1};
  int i;

  for (i = 0; i < 10; i++)
  {
    printf("Elemento: #%d: %d\n", (i + 1), num[i]);
  }

  return (0);
  
}