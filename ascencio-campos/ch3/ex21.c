#include <stdio.h>

int main () {
  float sal_min, h_trab, h_extra, sal, v_trab, v_extra;

  printf("Informe o valor do salário mínimo: ");
  scanf("%f", &sal_min);

  printf("Informe o número de horas trabalhadas: ");
  scanf("%f", &h_trab);

  printf("Informe o número de horas extras: ");
  scanf("%f", &h_extra);

  v_trab = h_trab * (sal_min / 8);
  v_extra = h_extra * (sal_min / 4);
  sal = v_trab + v_extra;

  printf("O salário bruto a receber é de: R$ %.2f\n", sal);

  return 0;
}