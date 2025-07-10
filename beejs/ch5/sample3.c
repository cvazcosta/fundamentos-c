#include <stdio.h>

void increment(int *p) // Seu parâmetro é um int-pointer
{
  *p = *p + 1; // Usamos o * para indicar que queremos o valor apontado por ela
}

int main(void)
{
  int i = 10;
  int *j = &i; // O valor de j será o address-of i

  printf("i is %d\n", i);
  printf("i is also %d\n", *j); // O valor para o qual j aponta é o mesmo de i

  increment(j);

  printf("i is %d\n", i);

  return 0;
}