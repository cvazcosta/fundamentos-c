#include <stdio.h>

int main () {
  float sal;

  printf("Informe o salário: ");
  scanf(" %f", &sal);

  if (sal < 500) {
    sal *= 1.3;
    printf("Seu novo salário é de: R$ %.2f\n", sal);
  } 
  else {
    printf("Você não tem direito ao aumento.\n");
  }

  return 0;
}