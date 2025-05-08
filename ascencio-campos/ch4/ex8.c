# include <stdio.h>

int main () {
  float sal;

  printf("Informe o valor do salário: ");
  scanf(" %f", &sal);

  if (sal > 300) {
    sal *= 1.15;
    printf("O salário reajustado é de: R$ %.2f\n", sal);
  }
  else {
    sal *= 1.3;
    printf("O salário reajustado é de: R$ %.2f\n", sal);
  }

  return 0;
}