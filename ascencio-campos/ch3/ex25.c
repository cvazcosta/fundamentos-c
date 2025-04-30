#include <stdio.h>

int main () {
  int horas, total_minutos, minutos, segundos, minutos_h;

  printf("Informe as horas: ");
  scanf("%d", &horas);

  printf("Informe os minutos: ");
  scanf("%d", &minutos);

  minutos_h = horas * 60;
  total_minutos = minutos + minutos_h;
  segundos = total_minutos * 60;

  printf("\nA hora informada equivale a: %d minutos\n", minutos_h);
  printf("O total de minutos é: %d minutos\n", total_minutos);
  printf("O total de segundos é: %d segundos\n", segundos);

  return 0;
}