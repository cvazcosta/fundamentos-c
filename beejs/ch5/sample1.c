#include <stdio.h>

int main(void)
{
  int i = 10;

  printf("The value of i is %d\n", i);
  printf("And its address is %p\n", (void *)&i);

  // Fazemos type casting (void *) porque este é o tipo de dado esperado pelo
  // especificador de formato %p

  return 0;
}