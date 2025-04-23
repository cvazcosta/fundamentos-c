#include <stdio.h>

int main () {
  int numero1, numero2, diferenca;

  printf("Informe o primeiro número: ");
  scanf("%d", &numero1);

  printf("Informe o segundo número: ");
  scanf("%d", &numero2);

  diferenca = numero1 - numero2;

  printf("A subtração de %d por %d é: %d\n", numero1, numero2, diferenca);

  return 0;
}