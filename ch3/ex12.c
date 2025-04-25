#include <stdio.h>

int main () {
  float sal_min, sal, qtd_sal;

  printf("Informe o valor do salário mínimo: ");
  scanf("%f", &sal_min);

  printf("Informe o valor do salário do funcionário: ");
  scanf("%f", &sal);

  qtd_sal = sal / sal_min;

  printf("O funcionário indicado recebe %.2f salário(s) mínimo(s)\n", qtd_sal);

  return 0;
}