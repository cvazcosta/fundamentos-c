#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10

// Posso ser esperto e imprimir o 1º vetor e depois poderia imprimir o 1º
// novamente alterado. Mas vou buscar uma forma de fazer uma cópia dos valores
// e passá-los para o 2º vetor, sem alterar o 1º.


int main(void)
{
  int *vetor_1;
  int *vetor_2;
}

void preencheVetor(int *vet)
{
  int i;
  srand(time(NULL));
  for (i = 0; i < TAM; i++)
  {
    vet[i] = rand() % 10;
  }  
}

void imprimeVetor(int *vet)
{
  int i;
  puts("### 1º Vetor ###");
  for (i = 0; i < TAM; i++)
  {
    printf("vet[%d]=%d\n", i, vet[i]);
  }  
}