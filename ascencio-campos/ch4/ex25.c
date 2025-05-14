#include <stdio.h>

int main () {
  float h_extra, h_falta, min, premio;

  printf("Informe o número de horas extras: ");
  scanf(" %f", &h_extra);

  printf("\nInforme o número de horas faltadas: ");
  scanf(" %f", &h_falta);

  min = (h_extra - ((float) 2 / 3) * h_falta) * 60;
  printf("%.2f\n", min);  

  if (min >= 2400)
    premio = 500;
  else if (min < 2400 && min >= 1800)
    premio = 400;
  else if (min < 1800 && min >= 1200)
    premio = 300;
  else if (min < 1200 && min >= 600)
    premio = 200;
  else
    premio = 100;

  printf("Valor do prêmio: R$ %.2f\n", premio);

  return 0;
}