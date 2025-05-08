#include <stdio.h>

int main () {
  float saldo_medio, cred;

  printf("Informe o saldo médio: ");
  scanf(" %f", &saldo_medio);

  if (saldo_medio > 400) {
    cred = saldo_medio * 0.3;
  } else if (saldo_medio <= 400 && saldo_medio > 300) {
    cred = saldo_medio * 0.25;
  } else if (saldo_medio <= 300 && saldo_medio > 200) {
    cred = saldo_medio * 0.2;
  } else {
    cred = saldo_medio * 0.1;
  }

  printf("O valor do crédito concedido é: R$ %.2f\n", cred);

  return 0;
}