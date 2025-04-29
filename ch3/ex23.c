#include <stdio.h>

int main () {
  float ang1, ang2, ang3;

  printf("Informe o primeiro ângulo: ");
  scanf("%f", &ang1);

  printf("Informe o segundo ângulo: ");
  scanf("%f", &ang2);

  ang3 = 180 - (ang1 + ang2);

  printf("O terceiro ângulo é: %.2f\n", ang3);

  return 0;
}