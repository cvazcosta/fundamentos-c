#include <stdio.h>

int main()
{
  int i;

  printf("Please enter an integer: ");
  scanf(" %d", &i);

  half(i);
  printf("In main(), i is still %d.\n", i);

  return 0;
}

/******************************************************************************/

half(int i)
{
  i /= 2;
  printf("Your value halved is %d.\n", i);
  return;
}