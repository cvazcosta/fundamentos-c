#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
  int logica[15];
  int linguagem[10];
  time_t t;
  int i, j, dup;

  srand(time(&t));

  // Preenchendo o vetor logica sem duplicatas
  for (i = 0; i < 15; i++)
  {
    do
    {
      dup = 0;
      logica[i] = (rand() % 50) + 1;  
      for (j = 0; j < i; j++)
      {
        if (logica[j] == logica[i])
        {
          dup = 1;
          break;
        }       
      }
    } while (dup);
  }

  // Imprimindo códigos do vetor logica
  printf("Alunos em Lógica\n");
  for (i = 0; i < 15; i++)
  {
    printf("logica[%d]: %d\n", i, logica[i]);
  }

  // Preenchendo o vetor linguagem sem duplicatas
  for (i = 0; i < 10; i++)
  {
    do
    {
      dup = 0;
      linguagem[i] = (rand() % 50) + 1;  
      for (j = 0; j < i; j++)
      {
        if (linguagem[j] == linguagem[i])
        {
          dup = 1;
          break;
        }       
      }
    } while (dup);
  }

  // Imprimindo códigos do vetor linguagem
  printf("\nAlunos em Linguagem de Programação\n");
  for (i = 0; i < 10; i++)
  {
    printf("linguagem[%d]: %d\n", i, linguagem[i]);
  }

  printf("\nLista de Alunos nas duas disciplinas\n");
  // Comparando os valores dos dois vetores
  for (i = 0; i < 10; i++)
  {
    for (j = 0; j < 15; j++)
    {
      if (logica[j] == linguagem[i])
      {
        printf("O Aluno cód. #%d está matriculado nas duas disciplinas.\n", 
        logica[j]);
      }      
    }
  }

  return 0;

}