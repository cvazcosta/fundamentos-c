#include <stdio.h>

int main () {
  float preco;

  printf("Informe o preço do produto: ");
  scanf("%f", &preco);

  preco *= 0.9;

  printf("O preço após o desconto de 10%% é: R$ %.2f\n", preco);

  return 0;
}