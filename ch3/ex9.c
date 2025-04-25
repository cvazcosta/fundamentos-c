#include <stdio.h>

int main () {
  float b_maior, b_menor, altura, area;

  printf("Informe a medida da base maior: ");
  scanf("%f", &b_maior);

  printf("Informe a medida da base menor: ");
  scanf("%f", &b_menor);

  printf("Informe a medida da altura: ");
  scanf("%f", &altura);

  area = ((b_maior + b_menor) * altura) / 2;

  printf("A área do trapézio informado é: %.2f\n", area);

  return 0;
}