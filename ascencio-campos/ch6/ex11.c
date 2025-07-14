#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void main(void)
{
  int vet[10];
  int i, j, k, len1, len2, temp;

  len1 = len2 = 0;

  srand(time(NULL));

  printf("### Vetor com 10 inteiros ###\n\n");
  for (i = 0; i < 10; i++)
  {
    vet[i] = (rand() % 100) + 1;
    printf("vet[%d]=%d\n", i, vet[i]);
    if (vet[i] % 2 == 0)
    {
      len1++;
    } else
    {
      len2++;
    }    
  }

  int pares[len1];
  int impares[len2];

  for (i = j = k = 0; i < 10; i++)
  {
    temp = vet[i];
    if (vet[i] % 2 == 0)
    {
      pares[j] = temp;
      j++;
    } else
    {
      impares[k] = temp;
      k++;
    }    
  }

  printf("\n### Vetor de Pares ###\n\n");
  for (i = 0; i < len1; i++)
  {
    printf("pares[%d]=%d\n", i, pares[i]);
  }

  printf("\n### Vetor de Ímpares\n\n");
  for (i = 0; i < len2; i++)
  {
    printf("ímpares[%d]=%d\n", i, impares[i]);
  }
  
}