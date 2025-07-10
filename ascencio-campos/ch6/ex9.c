#include <stdio.h>

int main(void)
{
  char produtos[10][51];
  float precos[10];
  float novoPreco;
  int cod[10];
  int i;

  for (i = 0; i < 10; i++)
  {
    printf("\nInforme o nome do %dº produto: ", (i + 1));
    fgets(produtos[i], 50, stdin);
    printf("\nInforme o código do %dº produto: ", (i + 1));
    scanf(" %d", &cod[i]);
    printf("\nInforme o preço do %dº produto", (i + 1));
    scanf(" %f%*c", &precos[i]);
  }
  
  for (i = 0; i < 10; i++)
  {
    novoPreco = 0;

    if ((cod[i] % 2 == 0) && (precos[i] > 1000)) 
    {
      novoPreco = precos[i] * 1.2;
    } else if ((cod[i] % 2 == 0))
    {
      novoPreco = precos[i] * 1.15;
    } else if ((precos[i] > 1000))
    {
      novoPreco = precos[i] * 1.1;
    }

    if (novoPreco)
    {
      printf("\nProduto: %s", produtos[i]);
      printf("Código: %d\n", cod[i]);
      printf("Preço: $%.2f\n", precos[i]);
      printf("Novo Preço: $%.2f\n", novoPreco);
    }
  }
  
  return 0;

}