#include <stdio.h>

int main () {
  float a = 19.0;
  float b = 5.0;
  float floatAnswer;

  int x = 19;
  int y = 5;
  int intAnswer;

  floatAnswer = a / b;
  printf("%.1f ÷ %.1f = %.1f\n", a, b, floatAnswer);

  floatAnswer = x / y;
  printf("%d ÷ %d = %.1f\n", x, y, floatAnswer);

  intAnswer = a / b;
  printf("%.1f ÷ %.1f = %d\n", a, b, intAnswer);

  intAnswer = x / y;
  printf("%d ÷ %d = %d\n", x, y, intAnswer);

  intAnswer = x % y;
  printf("%d %% %d = %d\n", x, y, intAnswer);

  return 0;
}