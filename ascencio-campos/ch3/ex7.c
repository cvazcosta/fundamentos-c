#include <stdio.h>

int main () {
  const float variacao1 = 1.15;
  const float variacao2 = 1.2;
  float peso, peso15, peso20;

  printf("Informe seu peso em kg: ");
  scanf("%f", &peso);

  peso15 = peso * variacao1;
  peso20 = peso * variacao2;

  printf("O novo peso pós aumento de 15%% é: %.2f Kg\n", peso15);
  printf("O novo peso pós aumento de 20%% é: %.2f Kg\n", peso20);

  return 0;
}