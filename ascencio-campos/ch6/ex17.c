#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
  int vet_1[10], vet_2[10], vet_3[20];
  int i, j, temp_1;

  srand(time(NULL));

  for (i = 0, j = 10; i < 10; i++, j++)
  {
    vet_1[i] = (rand() % 100) + 1;
    vet_2[i] = (rand() % 100) + 1;
    vet_3[i] = vet_1[i];
    vet_3[j] = vet_2[i];
  }

  puts("Junção dos dois arrays:");
  for (i = 0; i < 20; i++)
  {
    printf("vet_3[%d]=%d\n", i, vet_3[i]);
  }

  for (i = 0; i < 19; i++)
  {
    for (j = (i + 1); j < 20; j++)
    {
      if (vet_3[i] <= vet_3[j])
      {
        temp_1 = vet_3[i];
        vet_3[i] = vet_3[j];
        vet_3[j] = temp_1;        
      }      
    }    
  }

  puts("### Array na Ordem Decrescente ###");
  for (i = 0; i < 20; i++)
  {
    printf("vet_3[%d]=%d\n", i, vet_3[i]);
  }  

  return 0;
  
}