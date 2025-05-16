#include <stdio.h>

int main () {
  int a, b, c, d;
  int nums[100];
  int ord[100];
  int rest[100];
  
  for (int y = 0; y < 5; y++)
  {
    printf("Informe o 1º valor: ");
    scanf(" %d", &nums[0]);

    printf("Informe o 2º valor: ");
    scanf(" %d", &nums[1]);

    printf("Informe o 3º valor: ");
    scanf(" %d", &nums[2]);
    
    printf("Informe o 4º valor: ");
    scanf(" %d", &nums[3]);
    
    printf("\nNúmeros na ordem lida: %d, %d, %d, %d\n", 
    nums[0], nums[1], nums[2], nums[3]);

    int k = 3;
    int l = 1;
    ord[0] = 999999999;
    ord[3] = -1;
  
    for (int i = 0; i < 3; i++) 
    {
      for (int j = 0; j < k; j++)
      {
        // Verificando o menor número
        if (nums[i] <= nums[j+l])
        {        
          if (nums[i] <= ord[0]) 
          {          
            ord[0] = nums[i];          
          }
        } 
        else
        {
          if (nums[j+l] <= ord[0]) 
          {
            ord[0] = nums[j+l];
          }
        }   
        
        // Verificando o maior número
        if (nums[i] >= nums[j+l])
        {
          if (nums[i] >= ord[3]) 
          {
            ord[3] = nums[i];
          }
        } 
        else
        {
          if (nums[j+l] >= ord[3]) 
          {
            ord[3] = nums[j+l];
          }
        }  
      }    
      k--;
      l++;    
    }
  
    // Identificando os números intermediários 
    // (só funciona se todos os números forem diferentes)
    int n = 0;
    for (int m = 0; m <= 3; m++)
    {
      if (nums[m] > ord[0] && nums[m] < ord[3])
      {
        rest[n] = nums[m];      
        n++;
      }
    }
  
    // Comparando os números restantes e ordenando-os na lista final
    if (rest[0] < rest[1])
    {
      ord[1] = rest[0];
      ord[2] = rest[1];
    }
    else if (rest[0] > rest[1])
    {
      ord[1] = rest[1];
      ord[2] = rest[0];
    } 
    else 
    {
      ord[1] = rest[0];
      ord[2] = rest[0];
    }

    printf("Ordem crescente: %d, %d, %d, %d\n", ord[0], ord[1], ord[2], ord[3]);
    printf("Ordem decrescente: %d, %d, %d, %d\n\n", ord[3], ord[2], ord[1], ord[0]);

  }
  
  return 0;
}