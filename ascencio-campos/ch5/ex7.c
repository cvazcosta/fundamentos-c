#include <stdio.h>

int main () {
  int idade, peso, acima50, entre20_30, abaixo_peso;
  float altura, soma_altura, media_altura, porcentagem;

  soma_altura = 0;

  for (int i = 1; i < 6; i++)
  {
    printf("Informe a idade da %dª pessoa: ", i);
    scanf(" %d", &idade);

    printf("Informe a altura da %dª pessoa: ", i);
    scanf(" %f", &altura);

    printf("Informe o peso da %dª pessoa: ", i);
    scanf(" %d", &peso);

    // Verificando a quantidade de pessoas com 50+ anos
    if (idade > 50)
    {
      acima50 += 1;
    }
    
    // Verificando a quantidade de pessoas entre 10 e 20 anos
    if (idade >= 10 && idade <= 20)
    {
      soma_altura += altura;
      entre20_30 += 1;
    }

    // Verificando pessoas abaixo de 40 quilos
    if (peso < 40)
    {
      abaixo_peso += 1;
    }
    
  }

  media_altura = soma_altura / (float) entre20_30;
  porcentagem = ((float) abaixo_peso / 5.0) * 100;

  printf("\nPessoas acima de 50 anos: %d\n", acima50);
  printf("Média da altura das pessoas entre 10 e 20 anos: %.2f\n", media_altura);
  printf("%% de pessoas abaixo de 40kg: %.2f%%\n", porcentagem);

  return 0;  
  
}