#include <stdio.h>
#include <string.h>

int main () {
  float preco;
  char classificacao[15];

  printf("Informe o preço: ");
  scanf(" %f", &preco);

  if (preco > 100)
    preco *= 1.15;
  else if (preco <= 100 && preco > 50)
    preco *= 1.10;
  else
    preco *= 1.05;

  if (preco > 200)
    strcpy(classificacao, "Muito Caro");
  else if (preco <= 200 && preco > 120)
    strcpy(classificacao, "Caro");
  else if (preco <= 120 && preco > 80)
    strcpy(classificacao, "Normal");
  else
    strcpy(classificacao, "Barato");

  printf("Novo preço: R$ %.2f\nClassificação: %s\n", preco, classificacao);

  return 0;
}