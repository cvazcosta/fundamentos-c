#include <stdio.h>

int main () {
  float preco = 5.00;  
  float despesas = 200;
  int ingressos = 120;
  float lucro;

  printf("Preço\t\tIngresso\tLucro\n");

  for (int i = 0; i < 10; i++)
  {
    lucro = preco * ingressos - despesas;
    printf("$%.2f\t\t%d\t\t$%.2f\n", preco, ingressos, lucro);
    preco -= 0.5;
    ingressos += 26;
  }
  
  return 0;
}