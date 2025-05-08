#include <stdio.h>

int main () {
  float investimento;
  int opcao;

  printf("Tipos de investimento:\n");
  printf("1- Poupança\n");
  printf("2- Fundos de renda fixa\n");
  printf("Informe o tipo desejado: ");
  scanf(" %d", &opcao);

  printf("Informe o valor do investimento: ");
  scanf(" %f", &investimento);

  switch (opcao)
  {
  case 1:
      investimento *= 1.03;
    break;

  case 2:
      investimento *= 1.04;
    break;
  
  default:
      printf("Opção inválida\n");
    break;
  }

  printf("O montante após um mês é de: R$ %.2f\n", investimento);

  return 0;
}