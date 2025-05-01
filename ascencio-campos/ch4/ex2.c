#include <stdio.h>

int main () { 
  float n1, n2, media;

  printf("Informe a primeira nota: ");
  scanf("%f", &n1);

  printf("Informe a segunda nota: ");
  scanf("%f", &n2);

  media = (n1 + n2) / 2;

  // Inserindo verificação para evitar a msg aprovado em médias negativas
  if (media < 0)
    printf("A média não pode ser negativa.\n");
  else
    if (media > 0 && media < 3)
      printf("Reprovado\n");    
    else if (media > 3 && media < 7)
      printf("Exame\n");
    else
      printf("Aprovado\n");

  return 0;
  
}