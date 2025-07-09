#include <stdio.h>

int main(void)
{
  int i;
  int *p; // Definindo p como um int pointer

  p = &i; // Atribuindo o endereço de memória de i para p

  i = 10; // i = 10
  *p = 20; // i = 20

  printf("i = %d\n", i);
  printf("*p = %d\n", *p);

  return 0;
}