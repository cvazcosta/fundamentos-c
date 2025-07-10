#include <stdio.h>

int main(void)
{
  int *p;
  p = NULL;

  if (p == 0)
    printf("Null = 0 :o\n");
  else
    printf("Null is not 0 :o is %p\n", p);
    printf("His own address is: %p\n", &p);

  return 0;
}
