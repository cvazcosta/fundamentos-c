#include <stdio.h>

int main () {
  int a, b, c, d;
  int pri, seg, ter, qua;
  int nums[16];
  
  // for (int i = 0; i < 5; i++)
  // {
  //   printf("Informe o 1º valor: \n");
  //   scanf(" %d", &a);

  //   printf("Informe o 2º valor: \n");
  //   scanf(" %d", &b);

  //   printf("Informe o 3º valor: \n");
  //   scanf(" %d", &c);

  //   printf("Informe o 4º valor: ");
  //   scanf(" %d", &d);

  //   printf("\nNúmeros informados: %d, %d, %d, %d\n", a, b, c, d);
  // }

  printf("Informe o 1º valor: ");
  scanf(" %d", &a);

  printf("Informe o 2º valor: ");
  scanf(" %d", &b);

  printf("Informe o 3º valor: ");
  scanf(" %d", &c);

  printf("Informe o 4º valor: ");
  scanf(" %d", &d);

  nums[0] = a;
  nums[1] = b;
  nums[2] = c;
  nums[3] = d;

  // printf("%d", nums[0]);
  // printf("%d", nums[1]);
  // printf("%d", nums[2]);
  // printf("%d", nums[3]);  

  for (int i = 0; i < 3; i++)
  {
    if (nums[i+1] <= nums[i]) 
    {
      nums[0] = nums[i+1];
    }
  }

  printf("O menor número é: %d\n", nums[0]);
  printf("O segundo menor número é: %d\n", nums[1]); 
  
  return 0;
}