#include <stdio.h>


// Exemplo fazendo a cópia dos valores positivos de vet_A para vet_B

#define TAM 10

void preencheVetor(int vet[]);
int contaPositivos(int vet[]);
void preencheVetorB(int vet_A[], int *vet_B[]);
void imprimeVetorB(int n_positivos, int *vet_B[]);

int main(void)
{
  int vet_A[TAM];
  int n_positivos;
  preencheVetor(vet_A);
  n_positivos = contaPositivos(vet_A);
  int *vet_B[n_positivos]; // Array de pointers
  preencheVetorB(vet_A, vet_B);
  imprimeVetorB(n_positivos, vet_B);
  

  return 0;
}

void preencheVetor(int vet[])
{
  int i = 0;
  for (i = 0; i < TAM; i++)
  {
    printf("Informe o #%d numero: ", (i + 1));
    scanf("%d%*c", &vet[i]);
  }  
}

int contaPositivos(int vet[])
{
  int i;
  int positivos = 0;
  for (i = 0; i < TAM; i++)
  {
    if (vet[i] > 0)
    {
      positivos++;
    }    
  }  
  return positivos;
}

void preencheVetorB(int vet_A[], int *vet_B[])
{

  int i, j;
  for (i = j = 0; i < TAM; i++)
  {
    if (vet_A[i] > 0)
    {
      vet_B[j] = &vet_A[i]; // O array de pointer armazena o endereço de memória
      j++;
    }    
  }  
}

void imprimeVetorB(int n_positivos, int *vet_B[])
{ 
  int i;
  for (i = 0; i < n_positivos; i++)
  {
    printf("vet_B[%d]=%d\n", i, vet_B[i]);
  }  
}