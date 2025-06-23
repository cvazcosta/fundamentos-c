#include <stdio.h>

int g1 = 10;

int main()
{
  float l1;
  l1 = 9.0;

  printf("%d %.2f\n", g1, l1);

  prAgain();

  return 0;
}

float g2 = 19.0;

prAgain()
{
  int l2 = 5;
  printf("%d %.2f %d\n", l2, g2, g1);
  return;
}