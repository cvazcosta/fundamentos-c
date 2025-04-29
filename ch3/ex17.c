#include <stdio.h>

int main () {
  float raio, comprimento, area, volume;
  const long double pi = 3.141592653589793;

  printf("Informe o valor do raio: ");
  scanf("%f", &raio);

  printf("%.15Lf", pi);
  comprimento = 2 * pi * raio;
  area = pi * raio * raio;
  volume = 0.75 * pi * raio * raio * raio;

  printf("\nComprimento: %.2f\n", comprimento);
  printf("Área: %.2f\n", area);
  printf("Volume: %.2f\n", volume);

  return 0;
}