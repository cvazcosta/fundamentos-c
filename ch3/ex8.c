#include <stdio.h>

int main () {
  float peso;

  printf("Informe seu peso em kg: ");
  scanf("%f", &peso);

  peso = peso * 1000;

  printf("O peso informado em gramas é: %.2fg\n", peso);

  return 0;
}