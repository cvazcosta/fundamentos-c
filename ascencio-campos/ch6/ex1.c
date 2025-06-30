#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
  int i, num;
  time_t t;
  int vet[6];

  srand(time(&t));

  puts("Números do Vetor");
  for (i = 0; i < 6; i++)
  {
    vet[i] = rand() % 100;
    printf("#%d: %d\n", (i + 1), vet[i]);
  }

  printf("\n### Resultados ###\n");
  num = 0;
  for (i = 0; i < 6; i++)
  {
    if (vet[i] % 2 == 0)
    { 
      if (num == 0)
      {
        printf("Números pares:\n");
      }    
      printf("#%d: %d\n", (i + 1), vet[i]);
      num++;
    }
  }

  if (num != 0)
  {
    printf("Total de números pares: %d\n", num);
  } 
  
  if (num == 0)
  {
    puts("Não há números pares.");
    puts("\nNúmeros ímpares:");
    for (i = 0; i < 6; i++)
    {
      printf("#%d: %d\n", (i + 1), vet[i]);
    }
    printf("Total de números ímpares: 6\n");
  } else if (num == 6)
  {
    puts("\nNão há números ímpares.");
    exit(0);
  } else
  {
    puts("\nNúmeros ímpares:");
    for (i = 0; i < 6; i++)
    {
      if (vet[i] % 2 != 0)
      {
        printf("#%d: %d\n", (i + 1), vet[i]);
      }
    }
    printf("Total de números ímpares: %d\n", (6 - num));
  }  
  
  return 0;

}