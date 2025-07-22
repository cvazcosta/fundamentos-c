#include <stdio.h>

int main(void)
{
  FILE *fp;
  unsigned char bytes[6] = {5, 37, 0, 88, 255, 12};

  fp = fopen("./output.bin", "wb"); // 'write binary'

  // fwrite() recebe os seguintes args:
  //
  // * O pointer da origem dos dados que quero escrever
  // * O tamanho de cada unidade do tipo de dado
  // * A contagem total dos dados
  // * FILE* que receberá os dados (destino)

  fwrite(bytes, sizeof(char), 6, fp);

  fclose(fp);

  return 0;
}