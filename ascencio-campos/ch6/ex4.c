#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
  int vet[15];
  int i, j;
  time_t t;

  srand(time(&t));

  printf("### Array de Valores ###\n");
  for (i = 0; i < 15; i++)
  {
    vet[i] = rand() % 100;
    printf("vet[%d] = %d\n", i, vet[i]);
  }

  j = 0;
  for (i = 0; i < 15; i++)
  {
    if (vet[i] == 30)
    {
      printf("\nvet[%d] = 30!\n", i);
      j = 1;
    }
  }

  if (!j)
  {
    printf("\nNenhum elemento era igual a 30. :(\n");
  }
  
  return 0;
  
}