#include <stdio.h>

int main () {
  float comp, larg, area, pot;

  printf("Informe o comprimento do cômodo em m²: ");
  scanf("%f", &comp);

  printf("Informe a largura do cômodo em metros: ");
  scanf("%f", &larg);

  area = comp * larg;
  pot = area * 18;

  printf("\nA área informada é de %.2f m².\n", area);
  printf("A potência de iluminação necessária é de %.2f W.\n", pot);

  return 0;
}