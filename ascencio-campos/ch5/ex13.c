#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
  int peso, idade;
  float media, f1, f2, f3, f4, s1, s2, s3, s4, m1, m2, m3, m4;

  srand(time(0));

  s1 = s2 = s3 = s4 = f1 = f2 = f3 = f4 = 0;

  for (int i = 1; i <= 15; i++)
  {
    do
    {
      printf("Informe a %dª idade: ", i);
      scanf(" %d", &idade);
      if (idade < 1)
      {
        printf("Entrada inválida. Informe um valor maior ou igual a 1.\n");
      }      
    } while (idade < 1);

    do
    {
      printf("Informe o %dº peso: ");
      scanf(" %d", &peso);
      if (peso < 1)
      {
        printf("Entrada inválida. Informe um valor maior ou igual a 1.\n");
      }      
    } while (peso < 1);

    // Verificando enquadramento de faixa etária, incrementando qtd e somas
    if (idade >= 1 && idade <= 10)
    {
      f1++;
      s1 += peso;
    }
    else if (idade > 10 && idade <= 20)
    {
      f2++;
      s2 += peso;
    }
    else if (idade > 20 && idade <= 30)
    {
      f3++;
      s3 += peso;
    }
    else
    {
      f4++;
      s4 += peso;
    }
  }

  // Calculando o valor da 1ª média
  if (f1 == 0)
  {
    m1 = 0;
  }
  else
  {
    m1 = s1 / f1;
  }

  // Calculando o valor da 2ª média
  if (f2 == 0)
  {
    m2 = 0;
  }
  else
  {
    m2 = s2 / f2;
  }

  // Calculando o valor da 3ª média
  if (f3 == 0)
  {
    m3 = 0;
  }
  else
  {
    m3 = s3 / f3;
  }

  // Calculando o valor da 4ª média
  if (f4 == 0)
  {
    m4 = 0;
  }
  else
  {
    m4 = s4 / f4;
  }
  
  printf("\n##### Resultados #####\n");

  printf("Faixa Etária, Média Peso\n");
  printf("1 a 10 anos, %.2f\n", m1);
  printf("11 a 20 anos, %.2f\n", m2);
  printf("21 a 30 anos, %.2f\n", m3);
  printf("Acima de 31 anos, %.2f\n", m4);

  return 0;
}