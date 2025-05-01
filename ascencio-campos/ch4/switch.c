#include <stdio.h>

int main () {
  int num;

  printf("Informe um número: ");
  scanf("%d", &num);

  switch (num)
  {
  case 1:
    printf("O número 1 foi escolhido.\n");
    printf("Segunda linha de comando - teste.\n");
    break;

  case 2:
    printf("O número 2 foi escolhido.\n");
    break;
  
  default: printf("O número %d é diferente de 1 e 2.\n", num);
    break;
  }
  
  // getchar(); O autor usou esse comando, ainda não sei pra que serve
  return 0;
}