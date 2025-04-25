#include <stdio.h>

int main () {
  float lado, area;

  printf("Informe a medida de um dos lados do quadrado: ");
  scanf("%f", &lado);

  area = lado * lado;

  printf("A área do quadrado informado é: %.2f\n", area);

  return 0;
}