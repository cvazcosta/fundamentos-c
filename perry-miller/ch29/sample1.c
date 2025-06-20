#include <stdio.h>
#include <stdlib.h>
FILE * fptr;

int main()
{
  char letter;
  int i;

  fptr = fopen("./letters.txt", "w+");

  if (fptr == 0)
  {
    puts("There was an error while opening the file.\n");
    exit(1);
  }
  
  for (letter = 'A'; letter <= 'Z'; letter++)
  {
    fputc(letter, fptr);
  }

  puts("Just wrote the letters A thorugh Z");

  // Now read the file backwards

  fseek(fptr, -1, SEEK_END); // Minus 1 byte from the end
  printf("Here is the file backwards:\n");

  for (i = 26; i > 0; i--)
  {
    letter = fgetc(fptr);
    // Reads a letter, then backs up 2
    fseek(fptr, -2, SEEK_CUR);
    printf("The next letter is %c.\n", letter);
  }

  fclose(fptr);

  return 0;  
  
}