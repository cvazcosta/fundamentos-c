#include <stdio.h>

int main () {
  int num1, num2, num3, produto;

  printf("Informe o primeiro número: ");
  scanf("%d", &num1);

  printf("Informe o segundo número: ");
  scanf("%d", &num2);

  printf("Informe o terceiro número: ");
  scanf("%d", &num3);

  produto = num1 * num2 * num3;

  printf("A multiplicação entre %d, %d e %d é: %d\n", 
          num1, num2, num3, produto);

  return 0;
}