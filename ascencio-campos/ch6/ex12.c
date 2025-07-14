#include <stdio.h>

void main(void)
{
  int i;
  int nums[5];
  int soma = 0;

  for (i = 0; i < 5; i++)
  {
    printf("Digite o %dº número: ", (i + 1));
    scanf("%d%*c", &nums[i]);
    soma += nums[i];
  }

  printf("Os números digitados foram: ");
  for (i = 0; i < 5; i++)
  {
    printf("%d ", nums[i]);
    if (i <= 3)
    {
      printf("+ ");
    } else
    {
      printf("= %d\n", soma);
    }    
  }
}