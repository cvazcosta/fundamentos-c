#include <stdio.h>

int main () {
  // Praticando como obter elementos de array por meio do índice (subscript)
  char nome[30] = "carlos";

  printf("Primeira letra: %c\n", nome[0]);
  printf("Segunda letra: %c\n", nome[1]);
  printf("Terceira letra: %c\n", nome[2]);

  /* 
    Como uma string é um array de caracteres eu posso modificar toda a string
    mudando o valor de cada elemento e finalizando com o null zero para indicar
    o fim da string
  */
 
  nome[0] = 'm';
  nome[1] = 'a';
  nome[2] = 'x';
  nome[3] = '\0';

  printf("Novo nome: %s\n", nome);

  return 0;
}