#include <stdio.h>

int main()
{
  int i = 10;
  int ctr;
  float x = 20.5;

  int iAry[] = {10, 20, 30, 40, 50};

  puts("Here are main()'s variables before the function: ");
  printf("i is %d\n", i);
  printf("x is %.1f\n", x);
  for (ctr = 0; ctr < 5; ctr++)
  {
    printf("iAry[%d] is %d\n", ctr, iAry[ctr]);
  }

  changeSome(i, &x, iAry);

  puts("\n\nHere are main()'s variables after the function:");
  printf("i is %d\n", i);
  printf("x is %.1f\n", x);
  for (ctr = 0; ctr < 5; ctr++)
  {
    printf("iAry[%d] is %d\n", ctr, iAry[ctr]);
  }
  
  return 0;

}

/******************************************************************************/

changeSome(int i, float *newX, int iAry[5])
{
  // Apesar de todas as variáveis terem seus valores alterados, a única mudança
  // que não permanece é a de i

  int j;

  i = 47;
  *newX = 97.6;

  for (j = 0; j < 5; j++)
  {
    iAry[j] = 100 + 100 * j;
  }

  return;
  
}