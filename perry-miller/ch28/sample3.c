#include <stdio.h>
#include <stdlib.h>
FILE * fptr;

int main(void)
{
  fptr = fopen("./BookInfo.txt", "a");

  if (fptr == 0)
  {
    puts("Error opening the file.\n");
    exit(1);
  }  

  fprintf(fptr, "More books to come!");

  fclose(fptr);

  return 0;
}