#include <stdio.h>
#include <string.h>

void main(void)
{
  char alunos[8][31];
  float notas[8];
  float media;
  int i;
  float soma = 0.0;

  for (i = 0; i < 8; i++)
  {
    printf("Digite o nome do %dº aluno: ", (i + 1));
    fgets(alunos[i], 31, stdin);
    alunos[i][strcspn(alunos[i], "\n")] = '\0'; // Remove '\n'

    printf("Digite a nota de %s: ", alunos[i]);
    scanf("%f%*c", &notas[i]);
    soma += notas[i];
  }

  media = soma / 8.0;

  printf("\n### Relatório de Notas ###\n");
  for (i = 0; i < 8; i++)
  {
    printf("%s %.2f\n", alunos[i], notas[i]);
  }

  printf("\nMédia da classe = %.2f\n", media);
  
}