#include <stdio.h>

int main () {
  int senha = 4531;
  int num;

  printf("Informe a senha: ");
  scanf(" %d", &num);

  if (num == senha)
    printf("Acesso permitido\n");
  else
    printf("Acesso negado\n");

  return 0;
}