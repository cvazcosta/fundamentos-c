#include <stdio.h>

int main () {
  int sexo;
  float altura, peso;

  printf("Informe a altura: ");
  scanf(" %f", &altura);

  printf("1- Masculino\n");
  printf("2- Feminino\n");
  printf("Informe o número associado a seu sexo: ");
  scanf(" %d", &sexo);

  if (sexo == 1)
    peso = (72.7 * altura) - 58;
  else
    peso = (62.1 * altura) - 44.7;

  printf("Seu peso ideal é: %.2f\n", peso);

  return 0;
}