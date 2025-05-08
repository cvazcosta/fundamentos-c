#include <stdio.h>

int main () {
  float sal, imposto;

  printf("Informe o valor do salário bruto: ");
  scanf(" %f", &sal);

  imposto = sal * 0.07;

  if (sal > 900)
    sal += 35 - imposto;
  else if (sal <= 900 && sal >= 600)
    sal += 50 - imposto;
  else if (sal > 350 && sal < 600)
    sal += 75 - imposto;
  else
    sal += 100 - imposto;

  printf("O valor a receber é: R$ %.2f\n", sal);

  return 0;
}