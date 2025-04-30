#include <stdio.h>

int main () {
  int ano_nasc, ano_atual, anos, meses, dias;
  float semanas; 

  printf("Informe o ano de nascimento: ");
  scanf("%d", &ano_nasc);

  printf("Informe o ano atual: ");
  scanf("%d", &ano_atual);

  anos = ano_atual - ano_nasc;
  meses = anos * 12;
  dias = meses * 365;
  semanas = dias / 7;

  printf("\nIdade em anos: %d\n", anos);
  printf("Idade em meses: %d\n", meses);
  printf("Idade em semanas: %.1f\n", semanas);
  printf("Idade em dias: %d\n", dias);

  return 0;
}