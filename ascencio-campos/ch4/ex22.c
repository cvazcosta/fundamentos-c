#include <stdio.h>

int main () {
  float peso;
  unsigned int idade, resultado;

  printf("Informe a idade: ");
  scanf(" %d", &idade);

  printf("Informe o peso: ");
  scanf(" %f", &peso);

  if (idade >= 0) {
    if (idade < 20) {
      if (peso <= 60)
        resultado = 9;
      else if (peso > 90)
        resultado = 7;
      else
        resultado = 8;
    } else if (idade > 50) {
      if (peso <= 60)
        resultado = 3;
      else if (peso > 90)
        resultado = 1;
      else
        resultado = 2;
    } else {
      if (peso <= 60)
        resultado = 6;
      else if (peso > 90)
        resultado = 4;
      else
        resultado = 5;
    }
  } else
    printf("Entrada inválida. Informe uma idade a partir de 0.\n");

  printf("Grupo: %d\n", resultado);

  return 0;
}