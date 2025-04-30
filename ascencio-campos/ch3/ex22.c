#include <stdio.h>

int main () {
  int lados, diagonais;

  printf("Informe o número de lados do polígono: ");
  scanf("%d", &lados);

  diagonais = lados * (lados - 3) / 2;

  printf("O número de diagonais é: %d\n", diagonais);

  return 0;
}