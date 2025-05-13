#include <stdio.h>

int main () {
  float preco;
  int codigo;

  printf("Informe o preço do produto: ");
  scanf(" %f", &preco);

  printf("Informe o código do produto: ");
  scanf(" %d", &codigo);
  
  // Verificando se o código digitado está entre 1 e 30
  if (codigo >= 1 && codigo <= 30) {
    // Verificando qual a procedência do código digitado e imprimindo resultado
    if (codigo == 1)
      printf("Procedência: Sul\n");
    else if (codigo == 2)
      printf("Procedência: Norte\n");
    else if (codigo == 3)
      printf("Procedência: Leste\n");
    else if (codigo == 4)
      printf("Procedência: Oeste\n");
    else if (codigo >= 5 && codigo <= 6)
      printf("Procedência: Nordeste\n");
    else if (codigo >= 7 && codigo <= 9)
      printf("Procedência Sudeste\n");
    else if (codigo >= 10 && codigo <= 20)
      printf("Procedência: Centro-Oeste\n");
    else
      printf("Procedência: Nordeste\n");
  } 
  else
    printf("Entrada inválida. Informe um código entre 1 e 30.\n");

  return 0;
}