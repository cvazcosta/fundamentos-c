#include <stdio.h>

int main () {
  int num, ctr, num_primos;

  num_primos = 0;

  for (int i = 1; i <= 10; i++)
  { 
    // Inicializando o contador a cada iteração
    ctr = 0;

    // Solicitando entrada do usuário e verificando se é válida
    do
    {
      printf("Informe um número acima de 1: ");
      scanf(" %d", &num);
      if (num < 2)
      {
        printf("Entrada inválida. Tente novamente.\n\n");
      }      
    } while (num < 2);

    /*
      Verificando se o número é primo dividindo ele por todos os números menores
      que ele começando do 2 até o número imediatamente anterior a ele. 
      
      Caso o resultado de uma dessas divisões gere resto = 0 isso indica que ele 
      possui um divisor além de 1 e dele mesmo, então o contador é incrementado 
      e o loop é encerrado
    */ 

    for (int j = 2; j < num; j++)
    {
      if (num % j != 0)
      {
        continue;
      }
      else
      {
        ctr++;
        break;
      }        
    }
    
    /*
      Se o contador for diferente de zero isso significa que ele possui um outro
    divisor
    */
   
    if (ctr != 0)
    {
      num_primos++;
    }

  }

  printf("A quantidade de números primos é: %d\n", num_primos);

  return 0;
  
}