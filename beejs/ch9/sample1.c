#include <stdio.h>

void main(void)
{
  FILE *fp;

  fp = fopen("./hello.txt", "r");

  // Se o arquivo não for encontrado, fopen() retorna NULL 
  // Útil para error checking :)

  int c = fgetc(fp);
  printf("%c\n", c); // Retorna H

  c = fgetc(fp);
  printf("%c\n", c); // Retorna e
  
// Uma chamada subsequente de fgetc pegaria o próximo char, neste caso, 'l'

  fclose(fp);
}