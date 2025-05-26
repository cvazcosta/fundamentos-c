#include <stdio.h>
#include <string.h>

// Imprimindo C is fun um caracter por vez

int main () {
  int i;
  char msg[] = "C is fun";

  for (i = 0; i < strlen(msg); i++)
  {
    putchar(msg[i]);
  }
  putchar('\n');

  return (0);  
}