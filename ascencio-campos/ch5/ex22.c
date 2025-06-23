#include <stdio.h>

int main()
{
  int idade;
  int ctr = 0;
  float altura, media;
  float soma, qtd = 0.0;

  do
  {
    puts("Informe uma idade menor ou igual a 0 para sair.");
    printf("Informe a idade #%d: ", (ctr + 1));
    scanf(" %d", &idade);

    if (idade <= 0)
    {
      break;
    }

    printf("Informe a altura #%d: ", (ctr + 1));
    scanf(" %f", &altura);

    if (idade > 50)
    {
      soma += altura;
      qtd++;
    }
    
    ctr++;
    
  } while (idade > 0);

  media = soma / qtd;

  puts("\n### Resultados ###\n");
  printf("Pessoas acima de 50 anos: %.0f\n", qtd);
  printf("Média de altura: %.2f\n", media);

  return 0;
  
}