#include <stdio.h>

int main () {
  const int peso1 = 2;
  const int peso2 = 3;
  float nota1, nota2, media_pond;

  printf("Informe a primeira nota: ");
  scanf("%f", &nota1);

  printf("Informe a segunda nota: ");
  scanf("%f", &nota2);

  media_pond = ((nota1 * peso1) + (nota2 * peso2)) / (peso1 + peso2);

  printf("A média ponderada das notas %.1f e %.1f é: %.1f\n", 
  nota1, nota2, media_pond);

  return 0;
}