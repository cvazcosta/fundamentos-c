#include <stdio.h>

int main () {
  const float comissao = 0.04;
  float sal_fixo, vendas, sal_final;

  printf("Informe o valor do salário fixo: ");
  scanf("%f", &sal_fixo);

  printf("Informe o valor de suas vendas: ");
  scanf("%f", &vendas);

  sal_final = (vendas * comissao) + sal_fixo;

  printf("O salário final é: R$ %.2f\n", sal_final);

  return 0;
}