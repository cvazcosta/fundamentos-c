#include <stdio.h>
#include <string.h>

void main(void)
{
  char nomes[6][41];
  char *situacao;
  float nota1[6], nota2[6], medias[6];
  float soma, mediaClasse;
  int i;
  float aprovados, exame;

  aprovados = exame = 0.0;

  // Preenchendo os vetores dos nomes e notas e calculando a média individual
  for (i = 0; i < 6; i++)
  {
    soma = 0;
    printf("Informe o nome do %dº aluno: ", (i + 1));
    fgets(nomes[i], 41, stdin);
    nomes[i][strcspn(nomes[i], "\n")] = '\0';

    printf("Informe a 1ª nota: ");
    scanf("%f%*c", &nota1[i]);

    printf("Informe a 2ª nota: ");
    scanf("%f%*c", &nota2[i]);

    soma += nota1[i] + nota2[i];
    medias[i] = soma / 2.0;
  }

  // Imprimindo o cabeçalho da tabela
  printf("\nALUNO | 1ª PROVA | 2ª PROVA | MÉDIA | SITUAÇÃO\n");

  // Determinando situação do aluno e imprimindo resultados individuais
  for (i = 0; i < 6; i++)
  {
    if (medias[i] < 3)
    {
      situacao = "Reprovado";
    } else if (medias[i] >= 7)
    {
      situacao = "Aprovado";
      aprovados++;

    } else
    {
      situacao = "Exame";
      exame++;
    }    
    
    printf("%s | %.2f | %.2f | %.2f | %s\n", 
      nomes[i], 
      nota1[i], 
      nota2[i], 
      medias[i], 
      situacao
    );
  }

  // Calculando média da classe
  soma = 0;
  for (i = 0; i < 6; i++)
  {
    soma += medias[i];
  }
  mediaClasse = soma / 6.0;

  // Imprimindo os resultados da classe
  printf("\nMédia da Classe = %.2f\n", mediaClasse);
  printf("%% de alunos aprovados = %.1f%%\n", (aprovados / 6.0) * 100);
  printf("%% de alunos de exame = %.1f%%\n", (exame / 6.0) * 100);
  printf("%% de alunos reprovados = %.1f%%\n", ((6 - aprovados) / 6.0) * 100); 

}