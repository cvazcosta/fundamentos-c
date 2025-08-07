#include <stdio.h>
#include <stdlib.h>

#define TAM 10

void preencheVetor(int *vet);
void imprimePositivos(int *vet);

int main(void)
{
  int *vet;
  vet = (int *) malloc(TAM * sizeof(int));
  preencheVetor(vet);
  imprimePositivos(vet);
  free(vet);

  return 0;
}

void preencheVetor(int *vet)
{
  int i;
  for (i = 0; i < TAM; i++)
  {
    printf("Informe o %dº elemento: ", (i + 1));
    scanf("%d%*c", &vet[i]);
  }  
}

void imprimePositivos(int *vet)
{
  int i;
  for (i = 0; i < TAM; i++)
  {
    if (vet[i] > 0)
    {
      printf("vet[%d]=%d\n", i, vet[i]);
    }    
  }  
}