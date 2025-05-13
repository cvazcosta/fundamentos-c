#include <stdio.h>

int main () {
  int idade;

  printf("Informe a idade: ");
  scanf(" %d", &idade);

  if (idade > 30)
    printf("Sênior\n");
  else if (idade <= 30 && idade >= 16)
    printf("Adulto\n");
  else if (idade < 16 && idade >= 11)
    printf("Adolescente\n");
  else if (idade < 11 && idade >= 8)
    printf("Juvenil\n");
  else if (idade < 8 && idade >= 5)
    printf("Infantil\n");
  else
    printf("Entrada inválida\n");

  return 0;
}