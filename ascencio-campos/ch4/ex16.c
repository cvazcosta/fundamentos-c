#include <stdio.h>

int main () {
  float preco;
  float desconto = 0;
  int codigo;

  printf("Informe o preço do produto: ");
  scanf(" %f", &preco);

  printf("Informe o código do produto: ");
  scanf(" %d", &codigo);

  if (preco > 30) {
    preco > 100 ? (desconto = preco * 0.15) : (desconto = preco * 0.1);
  }

  preco -= desconto;

  printf("Valor do desconto: R$ %.2f\nNovo preço: R$ %.2f\n", desconto, preco);

  return 0;
}