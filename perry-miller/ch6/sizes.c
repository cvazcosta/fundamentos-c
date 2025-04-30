#include <stdio.h>

int main () {
  char nome[10];
  char nome_completo[33];
  // Exemplo de overflow que gera erro de compilação
  char nome_completo2[32] = "carlos-augusto-lira-vaz-da-costa";
  /*
    Os dois códigos abaixo são equivalentes, no segundo ele coloca o valor
    da string atribuída + o null zero
  */ 
  char nome_completo3[33] = "carlos-augusto-lira-vaz-da-costa";
  char nome_completo3[] = "carlos-augusto-lira-vaz-da-costa";

  /*
    Testei vários overflows, tanto para os inputados como os hard coded e não
    houve um padrão. As vezes funcionou, as vezes não. O ideal é só colocar o
    tamanho certo que vai dar certo.      
  */ 

  printf("nome: %ld bytes\n", sizeof(nome));
  printf("nome_completo: %ld bytes\n", sizeof(nome_completo));
  printf("nome_completo2: %ld bytes\n", sizeof(nome_completo2));

  printf("Informe o nome completo: ");
  scanf("%s%*c", nome_completo);

  printf("n1: %s\n", nome_completo);
  printf("n2: %s\n", nome_completo2);

  return 0;
}