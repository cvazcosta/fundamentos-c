#include <stdio.h>
#include <math.h>

int main () {
  float ca, h, angulo;
  const long double pi = 3.141592653589793;

  printf("Informe o ângulo em graus: ");
  scanf("%f", &angulo);

  printf("Informe a distância entre a escada e a parede: ");
  scanf("%f", &ca);

  // Convertendo o ângulo para rads para ajustar a entrada da função cos()
  angulo = angulo * (pi / 180);

  // Calculando a hipotenusa
  h = ca / cos(angulo);

  printf("O valor da hipotenusa é de: %.2f\n", h);

  return 0;
}