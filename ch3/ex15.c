#include <stdio.h>

int main () {
  float salario_i, salario_f, conta1, conta2;
  const float multa = 1.02;

  printf("Informe o valor do seu salário: ");
  scanf("%f", &salario_i);

  printf("Informe o valor da primeira conta: ");
  scanf("%f", &conta1);

  printf("Informe o valor da segunda conta: ");
  scanf("%f", &conta2);

  salario_f = salario_i - ((conta1 * multa) + (conta2 * multa));

  printf("Após o pagamento das duas contas restarão: R$ %.2f\n", salario_f);

  return 0;
}