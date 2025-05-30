#include <stdio.h>

int main () 
{
  int numeros[4];
  int i, j, k, l;
  int temp, didSwap;

  k = l = 0;

  do
  {
    printf("Informe o %dº número: ", (k + 1));
    scanf(" %d", &numeros[k]);
    k++;
  } while (k < 4);
  
  /* 
    Usando bubble sort para ordenar de forma ascendente
    O loop externo só precisa ser executado 3 vezes neste caso, na prática
    ele só precisará ser executado n - 1 vezes o tamanho do array
  */
  for (i = 0; i < 3; i++)
  { 
    // Inicializando antes do início de cada iteração do loop interno
    didSwap = 0;
    // Comparando os elementos i e i + 1
    for (j = i + 1; j < 4; j++)
    {
      if (numeros[i] > numeros[j])
      {
        temp = numeros[j];
        numeros[j] = numeros[i];
        numeros[i] = temp;
        didSwap = 1;
      }      
    }
    /*
      Se após uma passada inteira não houver trocas, significa que a ordenação
      foi finalizada, não é preciso mais continuar no loop    
    */
    if (didSwap == 0)
    {
      break;
    }
        
  }

  printf("\n##### Resultados #####\n");
  for (l = 0; l < 4; l++)
  {
    printf("%d\n", numeros[l]);
  }  
  
  return (0);
}