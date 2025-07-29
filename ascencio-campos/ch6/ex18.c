#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define TAM_VETOR 15

void preenche_vetor(int vet[]);
void imprime_vetor(int vet[]);
int identifica_maior_numero(int vet[]);
int identifica_menor_numero(int vet[]);

int main(void)
{
  int vet[15];
  int indice_maior, indice_menor;

  preenche_vetor(vet);
  imprime_vetor(vet);

  indice_maior = identifica_maior_numero(vet);
  indice_menor = identifica_menor_numero(vet);

  printf("Maior número: %d\n", vet[indice_maior]);
  printf("Menor número: %d\n", vet[indice_menor]);
  
  return 0;

}
/*****************************************************************/
void preenche_vetor(int vet[])
{
  int i;

  srand(time(NULL));

  for (i = 0; i < TAM_VETOR; i++)
  {
    vet[i] = (rand() % 1000) + 1;
  }
}
/*****************************************************************/
void imprime_vetor(int vet[])
{
  int i;

  for (i = 0; i < TAM_VETOR; i++)
  {
    printf("vet[%d]=%d\n", i, vet[i]);
  }
}
/*****************************************************************/
int identifica_maior_numero(int vet[])
{
  int maior = 0;
  int i, index;

  for (i = 0; i < TAM_VETOR; i++)
  {
    if (vet[i] >= maior)
    {
      maior = vet[i];
      index = i;
    }    
  }

  return index;

}
/*****************************************************************/
int identifica_menor_numero(int vet[])
{
  int menor = 1000;
  int i, index;

  for (i = 0; i < TAM_VETOR; i++)
  {
    if (vet[i] <= menor)
    {
      menor = vet[i];
      index = i;
    }    
  }

  return index;
}