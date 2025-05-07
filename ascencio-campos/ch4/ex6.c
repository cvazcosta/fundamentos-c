#include <stdio.h>
#include <math.h>

int main () {
  double n1, n2, resultado;
  int opcao;

  printf("1 - Elevar o primeiro número ao segundo\n");
  printf("2 - Raiz quadrada de ambos\n");
  printf("3- Raiz cúbica de ambos\n");
  printf("Informe a opção desejada: \n");
  scanf(" %d", opcao);

  switch (opcao)
  {
  case 1:
    resultado = pow(n1, n2);
    printf("O número %.2lf elevado a %.2lf é: %.2lf\n", n1, n2, resultado);
    break;
  
  default:
    break;
  }

  // resultado = sqrt(n1);
  // printf("%.2lf\n", resultado);

  // resultado = cbrt(n2);
  // printf("%.2lf\n", resultado);

  resultado = pow(2, 3);
  printf("%.2lf\n", resultado);

  return 0;
}