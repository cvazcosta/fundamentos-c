#include <stdio.h>

int main () {
  float sal;

  printf("Informe o valor do salário: ");
  scanf(" %f", &sal);

  if (sal > 900)
    printf("Você não receberá aumento.\n");
  else {
    if (sal <= 300)
      sal *= 1.15;
    else if (sal > 300 && sal < 600)
      sal *= 1.10;
    else
      sal *= 1.05;    
    printf("Seu novo salário é: R$ %.2f\n", sal);
  }
  
  return 0;
}