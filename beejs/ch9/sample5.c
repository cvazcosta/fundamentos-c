#include <stdio.h>
#include <stdlib.h>

void main(void)
{
  FILE *fp;
  int x = 32;

  fp = fopen("./output.txt", "w"); // fp = stdout; imprimiria no console!

  if (!fopen)
  {
    puts("File not found");
    exit(1);
  }

  fputc('B', fp);
  fputc('\n', fp);
  fprintf(fp, "x = %d\n", x);
  fputs("Hello, world!\n", fp);

  fclose(fp);
  
}