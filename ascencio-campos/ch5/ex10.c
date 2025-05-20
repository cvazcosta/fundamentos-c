#include <stdio.h>

int main () {
  int num, soma_pares, soma_primos, ctr;

  soma_pares = soma_primos = ctr = 0;

  for (int i = 1; i <= 10; i++)
  {
    do
    {
      printf("%d. Informe um número acima de 1: ", i);
      scanf(" %d", &num);
    } while (num < 2);

    // Inicializando contador que revela se o número é primo
    ctr = 0;
    
    // Verificando se é par e acrescentando caso positivo
    if (num % 2 == 0)
    {
      soma_pares += num;
    }
      
    // Verificando se é primo e incrementando contador caso positivo
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
      Caso o contador seja zero significa que o número não possui divisor além
      de 1 e dele mesmo      
    */
    if (ctr == 0)
    {
      soma_primos += num;
    }      
     
  }

  printf("\n##### Resultados #####\n");
  printf("A soma dos números primos é: %d\n", soma_primos);
  printf("A soma dos números pares é: %d\n", soma_pares);

  return 0;
  
}