#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
  char *clientes[8];
  int dvds[8];
  int i, gratis;

  for (i = 0; i < 8; i++)
  {
    clientes[i] = (char *) malloc(31 * sizeof(char));
    printf("Digite o nome do %d cliente: ", (i + 1));
    fgets(clientes[i], 31, stdin);
    clientes[i][strcspn(clientes[i], "\n")] = '\0';
    printf("Digite a quantidade de DVDs locados: ");
    scanf("%d%*c", &dvds[i]);
  }

  printf("Nome | Locações Grátis\n\n");
  for (i = 0; i < 8; i++)
  {
    gratis = dvds[i] / 10;
    printf("%s: %d\n", clientes[i], gratis);
    free(clientes[i]);
  }
  
  return 0;
}