#include <stdio.h>

int main () {
  float sal;

  printf("Informe seu salário atual: ");
  scanf(" %f", &sal);

  if (sal > 1000)
    sal *= 1.05;
  else if (sal <= 1000 && sal > 800)
    sal *= 1.10;
  else if (sal <= 800 && sal > 700)
    sal *= 1.20;
  else if (sal <= 700 && sal > 500)
    sal *= 1.30;
  else if (sal <= 500 && sal > 300)
    sal *= 1.40;
  else
    sal *= 1.50;

  printf("O novo salário é: R$ %.2f\n", sal);

  return 0;
}