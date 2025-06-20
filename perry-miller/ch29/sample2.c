#include <stdio.h>
#include <stdlib.h>
FILE * fptr;

int main()
{
  int pos, i;
  char letter;

  fptr = fopen("./letters.txt", "r+");

  if (fptr == 0)
  {
    puts("There was an error opening the file.");
    exit(1);
  }

  printf("Which letter would you like to change (1-26): ");
  scanf(" %d", &pos);

  fseek(fptr, (pos - 1), SEEK_CUR);
  fputc('*', fptr);

  fseek(fptr, 0, SEEK_SET);
  for (i = 0; i < 26; i++)
  {
    letter = fgetc(fptr);
    printf("%d. %c\n", (i + 1), letter);
  }  

  fclose(fptr);

  return 0;
}