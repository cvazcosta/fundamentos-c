#include <stdio.h>
#include <string.h>

int main(void)
{
  char produtos[5][31];
  char *prod[5]; // Array de pointers
  float precos[5];
  float soma, media, qtd3;
  int i, j, qtd, qtd2;

  qtd = qtd2 = 0;
  qtd3 = soma = 0.0;

  for (i = j = 0; i < 5; i++)
  {
    printf("Informe o nome do %dº produto: ", (i + 1));
    fgets(produtos[i], 31, stdin);
    produtos[i][strcspn(produtos[i], "\n")] = '\0';

    printf("Informe o preço do %dº produto: ", (i + 1));
    scanf("%f%*c", &precos[i]);

    if (precos[i] < 50)
    {
      qtd++;
    } else if (precos[i] >= 50 && precos[i] <= 100)
    {
      // O array terá pointers apenas para os produtos dentro do critério
      prod[j] = produtos[i]; 
      qtd2++;
      j++;
    } else
    {
      soma += precos[i];
      qtd3++;
    }
  }

  printf("\n### Resultados ###\n\n");
  printf("Produtos abaixo de R$ 50,00: %d\n", qtd);
  printf("Produtos entre R$ 50 e R$ 100: ");
  for (i = 0; i < qtd2; i++)
  {
    printf("%s", prod[i]);
    if ((i + 1) == qtd2)
    {
      printf(".");
    } else
    {
      printf(", ");
    }
  }
  printf("\n");
  media = soma / qtd3;
  printf("Média dos preços dos produtos acima de R$ 100: $%.2f\n", media);

  return 0;
  
}