#include <stdio.h>

int main () {
  float custo, preco;

  printf("Informe o custo de fábrica: ");
  scanf(" %f", &custo);

  if (custo > 25000)
    preco = custo + (custo * 0.35);
  else if (custo <= 25000 && custo > 12000)
    preco = custo + (custo * 0.25);
  else
    preco = custo + (custo * 0.05);

  printf("O preço final é: R$ %.2f\n", preco);

  return 0;
}