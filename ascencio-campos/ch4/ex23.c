#include <stdio.h>

int main () {
  int codigo, qtd;
  float p_unit, p_total, p_final, desconto;

  printf("Informe o código do produto: ");
  scanf(" %d", &codigo);

  printf("Informe a quantidade comprada: ");
  scanf(" %d", &qtd);

  // Determinando o preço unitário do produto
  if (codigo >= 1 && codigo <= 10)
    p_unit = 10;
  else if (codigo > 10 && codigo >= 20)
    p_unit = 15;
  else if (codigo > 20 && codigo <= 30)
    p_unit = 20;
  else
    p_unit = 30;

  // Calculando o preço total da nota
  p_total = p_unit * qtd;

  // Determinando o percentual do desconto
  if (p_total < 250)
    desconto = p_total * 0.05;
  else if (p_total > 500)
    desconto = p_total * 0.15;
  else
    desconto = p_total * 0.10;

  // Determinando o preço final
  p_final = p_total - desconto;

  // Imprimindo os resultados
  printf("Preço Unitário: R$ %.2f\n", p_unit);
  printf("Preço Total: R$ %.2f\n", p_total);
  printf("Valor do Desconto: R$ %.2f\n", desconto);
  printf("Preço Final: R$ %.2f\n", p_final);

  return 0;
}