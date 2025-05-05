#include <stdio.h>

int main () {
  int opcao;
  float n1, n2, resultado;

  printf("Informe a opção desejada: \n");
  printf("1 - Média entre dois números informados\n");
  printf("2 - Diferença do número maior pelo menor\n");
  printf("3 - Produto entre dois números digitados\n");
  printf("4 - Divisão do primeiro número pelo segundo\n");
  printf("Opção: ");
  scanf(" %d", &opcao);

  printf("Informe o primeiro número: ");
  scanf(" %f", &n1);

  printf("Informe o segundo número: ");
  scanf(" %f", &n2);

  switch (opcao)
  {
  case 1:
    resultado = (n1 + n2) / 2;
    printf("A média entre os números é: %.2f\n", resultado);
    break;
  
  case 2:
    if (n1 > n2) {
      resultado = n1 - n2;
      break;
    } else
      resultado = n2 - n1;
    printf("A diferença entre %.2f e %.2f é: %.2f\n", n1, n2, resultado);
    break;
  
  case 3:
    resultado = n1 * n2;
    printf("O produto entre %.2f e %.2f é: %.2f\n", n1, n2, resultado);
    break;

  case 4:
    if (n2 != 0) {
      resultado = n1 / n2;
      printf("A divisão entre %.2f e %.2f é: %.2f\n", n1, n2, resultado);
      break;
    } else
      printf("Não é possível efetuar divisão por zero.");
  
  default:
    printf("Opção inválida. O programa será encerrado.\n");
    break;
  }

  return 0;
}