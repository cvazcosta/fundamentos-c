#include <stdio.h>

int main () {
  int a, b, c, d;
  int pri, seg, ter, qua;
  
  for (int i = 0; i < 5; i++)
  {
    printf("Informe o 1º valor: \n");
    scanf(" %d", &a);

    printf("Informe o 2º valor: \n");
    scanf(" %d", &b);

    printf("Informe o 3º valor: \n");
    scanf(" %d", &c);

    printf("Informe o 4º valor: ");
    scanf(" %d", &d);

    printf("\nNúmeros informados: %d, %d, %d, %d\n", a, b, c, d);

    
  
  return 0;
}