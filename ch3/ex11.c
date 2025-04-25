#include <stdio.h>

int main () {
  float diag_maior, diag_menor, area;

  printf("Informe a medida da diagonal maior: ");
  scanf("%f", &diag_maior);

  printf("Informe a medida da diagonal menor: ");
  scanf("%f", &diag_menor);

  area = (diag_maior * diag_menor) / 2;

  printf("A área do losango informado é: %.2f\n", area);

  return 0;
}