#include <stdio.h>

int main () {
  float real, dolar, marco, libra;

  printf("Informe a quantidade de dinheiro: ");
  scanf("%f", &real);

  dolar = real / 1.8;
  marco = real / 2;
  libra = real / 3.57;

  printf("O valor em dólares é: US$ %.2f\n", dolar);
  printf("O valor em marco alemão é: DM %.2f\n", marco);
  printf("O valor em libra é: £ %.2f\n", libra);

  return 0;
}