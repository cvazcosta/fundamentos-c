#include <stdio.h>

int main () {

  int idade, f1, f2, f3, f4, f5;
  float p1, p2;

  f1 = f2 = f3 = f4 = f5 = 0;

  for (int i = 1; i <= 8; i++)
  {
    printf("Informe a %dª idade: \n", i);
    scanf(" %d", &idade);
    
    if (idade <= 15)
      f1++;
    else if (idade > 15 && idade <= 30)
      f2++;
    else if (idade > 30 && idade <= 45)
      f3++;
    else if (idade > 45 && idade <= 60)
      f4++;
    else
      f5++;
  }

  printf("\n##### Resultados #####\n");
  printf("\nAté 15 anos: %d\n", f1);
  printf("De 16 a 30 anos: %d\n", f2);
  printf("De 31 a 45 anos: %d\n", f3);
  printf("De 46 a 60 anos: %d\n", f4);
  printf("Acima de 60 anos: %d\n\n", f5);
  
  p1 = (f1 / 8.0) * 100;
  p2 = (f5 / 8.0) * 100;
  printf("%% de pessoas na 1ª faixa: %.2f%%\n", p1);
  printf("%% de pessoas na 5ª faixa: %.2f%%\n", p2);

}