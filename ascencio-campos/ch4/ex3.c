#include <stdio.h>

int main () {
  int n1, n2;

  printf("Informe o primeiro número: ");
  scanf(" %d", &n1);

  printf("Informe o segundo número: ");
  scanf(" %d", &n2);

  // Optei por criar uma estrutura condicional aninhada para praticar
  if (n1 != n2) {
    if (n1 > n2)
      printf("%d é menor que %d\n", n2, n1);
    else
      printf("%d é menor que %d\n", n1, n2);
    }
  else
    printf("Os números são iguais.\n");

  return 0;
}