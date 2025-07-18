#include <stdio.h>
#include <stdlib.h>

void main(void)
{
  FILE *fp;
  char name[1024];
  float length;
  int mass;

  fp = fopen("./whales.txt", "r");

  if (!fp)
  {
    puts("File not found");
    exit(1);
  }

  while (fscanf(fp, "%s %f %d", name, &length, &mass) != EOF)
  {
    printf("%s whale, %d tonnes, %.1f meters\n", name, mass, length);
  }

  fclose(fp);
}