#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
  int vet1[10], vet2[5];
  int i, j, k, soma, multiplos;
  int len1, len2; // Variáveis que vão definir o tamanho dos arrays resultantes

  len1 = len2 = 0;

  srand(time(NULL));

  // Preenchendo o 1º vetor e definindo o tamanho dos arrays resultantes
  printf("### 1º Vetor ###\n\n");
  for (i = 0; i < 10; i++)
  {
    vet1[i] = (rand() % 100) + 1;
    printf("vet1[%d]=%d\n", i, vet1[i]);
    if (vet1[i] % 2 == 0)
    {
      len1++; // Definindo o número de elementos pares
    } else
    {
      len2++; // Definindo o número de elementos pares
    } 
  }

  // Preenchendo o 2º vetor e obtendo a soma de todos os elementos
  printf("\n### 2º Vetor ###\n\n");
  soma = 0;
  for (i = 0; i < 5; i++)
  {
    vet2[i] = (rand() % 100) + 1;
    printf("vet2[%d]=%d\n", i, vet2[i]);
    soma += vet2[i];
  }

  // Preenchendo o 1º vetor resultante
  printf("\n### 1º Vetor Resultante ###\n\n");
  // O vetor tem tamanho igual ao número de elementos pares de vet1
  int res1[len1];

  // Percorrendo todos os elementos do vet1
  for (i = j = 0; i < 10; i++)
  { 
    // Se for par, é somado com a soma dos elementos do vet2
    // res1 recebe o valor a partir do 1º índice até o último
    if (vet1[i] % 2 == 0)
    {
      res1[j] = vet1[i] + soma;
      printf("res1[%d]=%d\n", j, res1[j]);       
      j++;
    }    
  }

  // Preenchendo o 2º vetor resultante
  printf("\n### 2º Vetor Resultante ###\n\n");
  // O vetor tem tamanho igual ao número de elementos ímpares de vet1
  int res2[len2];

  //Percorrendo vet1
  for (i = 0; i < 10; i++)
  {
    // Caso o elemento seja ímpar, começamos a contagem de seus múltiplos
    // fazendo um inner loop por todos os 5 elementos de vet2.
    // Quando a condição de múltiplo for atendida, a variável multiplos é incre-
    // mentada e depois atribuída a partir do 1º elemento de res2
    if (vet1[i] % 2 != 0)
    {
      multiplos = 0;
      for (j = 0; j < 5; j++)
      {
        if (vet1[i] % vet2[j] == 0)
        {
          multiplos++;
        }        
      }
      res2[k] = multiplos;
      printf("res2[%d]=%d\n", k, res2[k]);
      k++;      
    }    
  }  
  
  return 0;
  
}