#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
  int i, num;
  int vet[7];
  time_t t;

  srand(time(&t));

  puts("Elementos do Vetor");
  for (i = 0; i < 7; i++)
  {
    vet[i] = rand() % 100;
    printf("#%d: %d\n", (i + 1), vet[i]);
  }

  puts("\nMúltiplos de 2");
  num = 0;
  for (i = 0; i < 7; i++)
  {
    if (vet[i] % 2 == 0)
    {
      printf("#%d: %d\n", (i + 1), vet[i]);
      num = 1;
    }    
  }
  
  if (num == 0)
  {
    puts("Não há múltiplos de 2.");
  }

  puts("\nMúltiplos de 3");
  num = 0;
  for (i = 0; i < 7; i++)
  {
    if (vet[i] % 3 == 0)
    {
      printf("#%d: %d\n", (i + 1), vet[i]);
      num = 1;
    }    
  }
  
  if (num == 0)
  {
    puts("Não há múltiplos de 3.");
  }

  puts("\nMúltiplos de 2 e de 3");
  num = 0;
  for (i = 0; i < 7; i++)
  {
    if ((vet[i] % 2 == 0) && (vet[i] % 3 == 0))
    {
      printf("#%d: %d\n", (i + 1), vet[i]);
      num = 1;
    }    
  }
  
  if (num == 0)
  {
    puts("Não há múltiplos de 2 e de 3.");
  }
  
  return 0;

}