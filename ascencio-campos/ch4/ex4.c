#include <stdio.h>

int main () {
  int n1, n2, n3;

  printf("Informe o primeiro número: ");
  scanf(" %d", &n1);

  printf("Informe o segundo número: ");
  scanf(" %d", &n2);

  printf("Informe o terceiro número: ");
  scanf(" %d", &n3);

  if (n1 != n2 || n2 != n3) {
    if (n1 > n2 && n1 > n3)
      printf("O número %d é o maior.\n", n1);
    else if (n2 > n1 && n2 > n3)
      printf("O número %d é o maior.\n", n2);
    else 
      printf("O número %d é o maior.\n", n3);
  }
  else
    printf("Os três números são iguais.\n");

  return 0;
}