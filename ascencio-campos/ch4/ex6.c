#include <stdio.h>
#include <math.h>

int main () {
  double n1, n2, resultado1, resultado2;
  int opcao;

  printf("1 - Elevar o primeiro número ao segundo\n");
  printf("2 - Raiz quadrada de ambos\n");
  printf("3 - Raiz cúbica de ambos\n");
  printf("Informe a opção desejada: ");
  scanf(" %d", &opcao);

  switch (opcao)
  {
  case 1:
      printf("\nInforme o primeiro número: ");
      scanf(" %lf", &n1);
      printf("Informe o segundo número: ");
      scanf(" %lf", &n2);
      resultado1 = pow(n1, n2);
      printf("O número %.2lf^%.2lf é: %.2lf\n", n1, n2, resultado1);
    break;

  case 2:
      printf("\nInforme o primeiro número: ");
      scanf(" %lf", &n1);
      printf("Informe o segundo número: ");
      scanf(" %lf", &n2);
      resultado1 = sqrt(n1);
      resultado2 = sqrt(n2);
      printf("\nA raiz quadrada de %.2lf é %.2lf\n", n1, resultado1);
      printf("A raiz quadrada de %.2lf é %.2lf\n", n2, resultado2);
    break;
    
  case 3:
      printf("\nInforme o primeiro número: ");
      scanf(" %lf", &n1);
      printf("Informe o segundo número: ");
      scanf(" %lf", &n2);
      resultado1 = cbrt(n1);
      resultado2 = cbrt(n2);
      printf("\nA raiz cúbica de %.2lf é %.2lf\n", n1, resultado1);
      printf("A raiz cúbica de %.2lf é %.2lf\n", n2, resultado2);
    break;
  
  default:
      printf("Opção inválida. O programa será encerrado.");
    break;
  }
 
  return 0;
}