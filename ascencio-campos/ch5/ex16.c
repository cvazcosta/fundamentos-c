#include <stdio.h>

int main () 
{
  int idade, soma, qtd;
  float media;

  qtd = soma = 0;

  do
  {
    printf("Informe a %dª idade ou digite 0 para sair: ", (qtd + 1));
    scanf(" %d", &idade);

    if (idade != 0)
    {
      qtd++;
      soma += idade;
    }    

  } while (idade != 0);

  if (qtd != 0)
  {
    media = (float) soma / qtd;  
    printf("Idades cadastradas: %d\n", qtd);
    printf("Média das idades: %.1f\n", media);
  }  

  return (0);
  
}