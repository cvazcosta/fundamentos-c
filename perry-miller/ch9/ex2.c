#include <stdio.h>
#define SALESTAX 0.07

int main () {
  int tires;
  float tirePrice, beforeTax, netSales;

  printf("How many tired did you purchase? ");
  scanf(" %d", &tires);

  printf("What was the cost per tire (enter in $XX.XX format)? ");
  scanf(" $%f", &tirePrice);

  beforeTax = tires * tirePrice;
  netSales = beforeTax * (1 + SALESTAX);

  printf("You spent $%.2f on your tires.\n", netSales);

  return 0;
}