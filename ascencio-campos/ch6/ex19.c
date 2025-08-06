#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define TAM 10

void preencheVetor(int *vet);
void imprimeVetor(int *vet);
void multiplicaVetores(int *vet_1, int *vet_2, int *vet_3);

int main(void)
{
  int vetor_1[TAM];
  int vetor_2[TAM];
  int vetor_3[TAM];
  
  // Chamar srand em main garante que os vetores sejam diferentes
  srand(time(NULL));

  preencheVetor(vetor_1);
  imprimeVetor(vetor_1);

  preencheVetor(vetor_2);
  imprimeVetor(vetor_2);

  multiplicaVetores(vetor_1, vetor_2, vetor_3);
  imprimeVetor(vetor_3);

  return 0;
}

void preencheVetor(int *vet)
{
  int i;
  
  for (i = 0; i < TAM; i++)
  {
    vet[i] = (rand() % 10) + 1;
  }  
}

void imprimeVetor(int *vet)
{
  int i;
  printf("\n### Vetor ###\n\n");
  for (i = 0; i < TAM; i++)
  {
    printf("vet[%d]=%d\n", i, vet[i]);
  }  
}

void multiplicaVetores(int *vet_1, int *vet_2, int *vet_3)
{
  int i;
  for (i = 0; i < TAM; i++)
  {
    vet_3[i] = vet_1[i] * vet_2[i];
  }
}