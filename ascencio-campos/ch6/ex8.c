#include <stdio.h>

int main(void)
{
  char nomes[7][51];
  float medias[7];
  int i, indiceMaiorMedia;
  float maiorMedia;

  for (i = 0; i < 7; i++)
  {
    printf("\nInforme o nome do %dº aluno: ", (i + 1));
    fgets(nomes[i], 50, stdin);
    printf("Informe a nota do %dº aluno: ", (i + 1));
    scanf("%f", &medias[i]);
    getchar();
  }

  // Identificando a maior média
  for (i = 0; i < 7; i++)
  {
    if (medias[i] >= maiorMedia)
    {
      maiorMedia = medias[i];
      indiceMaiorMedia = i;
    }
  }

  printf("\n\n### Aluno com maior nota ###\n\n");
  printf("%s\n\n", nomes[indiceMaiorMedia]);

  printf("### Alunos em exame ###\n\n");

  for (i = 0; i < 7; i++)
  {
    if (medias[i] < 7)
    {
      printf("Aluno: %s", nomes[i]);
      printf("Média: %.2f\n", medias[i]);
      printf("Nota mínima necessária no exame: %.2f\n\n", (10.0 - medias[i]));
    }    
  }  

  return 0;
  
}