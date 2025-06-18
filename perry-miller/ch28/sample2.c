#include <stdio.h>
#include <stdlib.h>
FILE * fptr;

int main(void)
{
  char fileLine[100]; // Para armazenar os dados de cada linha
  fptr = fopen("./BookInfo.txt", "r");

  if (fptr != 0)
  {
    // feof() retorna 1 chegarmos na última linha do arquivo
    // Na prática, a última linha não é impressa nessa lógica
    while (!feof(fptr))
    {
      fgets(fileLine, 100, fptr);
      if (!feof(fptr))
      {
        puts(fileLine);
      } 
    }    
  } else
  {
    printf("\nError opening the file.\n");
  }
  fclose(fptr);
  return 0;
}