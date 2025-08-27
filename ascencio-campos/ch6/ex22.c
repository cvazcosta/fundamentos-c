#include <stdio.h>

// O tamanho do vetor resultante deve ser definido dinamicamente com base na
// quantidade de elementos positivos. Irei alocar exatamente a quantidade de
// memória que ele necessita e preciso também passar o valor ou uma cópia dos
// valores positivos para o vet_B

#define TAM 10

void preencheVetor(int vet[]);

int main(void)
{
  int vet_A[TAM];
  preencheVetor(vet_A);

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