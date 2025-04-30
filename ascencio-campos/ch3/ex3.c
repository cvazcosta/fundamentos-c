#include <stdio.h>

int main () {
  int num1, num2;
  float quociente;

  printf("Informe o primeiro número: ");
  scanf("%d", &num1);

  printf("Informe o segundo número: ");
  scanf("%d", &num2);

  quociente = num1 / num2;

  printf("A divisão de %d por %d é %.2f\n", num1, num2, quociente);

  return 0;
}