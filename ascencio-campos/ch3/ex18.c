#include <stdio.h>

int main () {
  float temp;

  printf("Informe a temperatura em graus Celsius: ");
  scanf("%f", &temp);

  temp = 1.8 * temp + 32;

  printf("A temperatura em Fahrenheit é: %.2f\n", temp);

  return 0;
}