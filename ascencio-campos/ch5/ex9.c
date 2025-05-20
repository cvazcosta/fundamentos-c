#include <stdio.h>

int main () {
  int idade, peso, soma_idade, q1, q2, q3;
  float altura, media_idade, porc;

  soma_idade = q1 = q2 = 0;

  for (int i = 1; i <= 10; i++)
  {
    do
    {
      printf("Informe a idade: \n");
      scanf(" %d", &idade);
    } while (idade < 0);
    
    soma_idade += idade;
    
    do
    {
      printf("Informe o peso: \n");
      scanf(" %d", &peso);
    } while (peso < 0);
    
    do
    { 
      printf("Informe a altura: \n");
      scanf(" %f", &altura);
    } while (altura < 0);    

    // Verificando se a pessoa tem peso acima de 90kg e altura inferior a 1,5m
    if (peso > 90 && altura < 1.5)
    {
      q1++;
    }
    
    // Verificando e contando a quantidade de pessoas acima de 1,9m
    if (altura > 1.9)
    {
      q2++;
      // Verificando e contando se a pessoa acima de 1,9m está entre 10 e 30 anos
      if (idade >= 10 && idade <= 30)
      {
        q3++;
      }      
    }    
  }

  printf("\n##### Resultados #####\n");
  
  // Calculando e imprimindo a media das idades de todos
  media_idade = soma_idade / 10;
  printf("Média das idades: %.1f\n", media_idade);

  // Imprimindo a qtd de pessoas com peso acima de 90 e altura abaixo de 1,5m
  printf("Pessoas acima de 90kg e abaixo de 1,50m: %d\n", q1);

  // Porcentagem de pessoas entre 10 e 30 anos entre as que tem 1.9m+
  porc = ((float) q3 / q2) * 100.0;
  printf("%% de pessoas entre 10 e 30 anos dos 1,90m+: %.1f%%\n", porc);

  return 0;
  
}