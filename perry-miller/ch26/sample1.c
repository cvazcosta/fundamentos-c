#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  int i, aSize;
  int * randomNums;
  time_t t;

  double total = 0;
  int biggest, smallest;
  float average;

  // Utilizando o int gerado pela var time para semear o rand
  srand(time(&t));

  // Obtendo a quantidade de números do array
  printf("How many random numbers do you want in your array? ");
  scanf(" %d", &aSize);

  // Alocando memória para receber a quantidade de números do array
  randomNums = (int *) malloc(aSize * sizeof(int));

  // Verificando se a alocação ocorreu com sucesso
  if (!randomNums)
  {
    printf("Random array allocation failed!\n");
    exit(1);
  }  

  // Obtendo números de 1 a 500 aleatoriamente para o array
  for (i = 0; i < aSize; i++)
  {
    randomNums[i] = (rand() % 500) + 1;
  }

  // Mostrando o array para o usuário
  for (i = 0; i < aSize; i++)
  {
    printf("%d ", randomNums[i]);
  }

  // Inicializando as variáveis que irão armazenar o maior e menor número
  biggest = 0;
  smallest = 500;

  // Obtendo maior e menor número e a soma total
  for (i = 0; i < aSize; i++)
  {
    total += randomNums[i];
    if (randomNums[i] > biggest)
    {
      biggest = randomNums[i];
    }
    if (randomNums[i] < smallest)
    {
      smallest = randomNums[i];
    }    
  }
  
  // Calculando a média e imprimindo os resultados
  average = (float)total / (float)aSize;  
  printf("\nThe biggest is: %d\n", biggest);
  printf("The smallest is: %d\n", smallest);
  printf("The average is: %.1f\n", average);
  
  // Liberando a heap memory utilizada
  free(randomNums);

  return (0);

}