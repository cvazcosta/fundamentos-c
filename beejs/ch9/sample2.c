#include <stdio.h>

void main(void)
{
  FILE *fp;
  int c;

  fp = fopen("./hello.txt", "r");

  while ((c = fgetc(fp)) != EOF)
  {
    printf("%c", c);
  }

  puts("");

  fclose(fp);
  
}