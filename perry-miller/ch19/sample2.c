#include <stdio.h>
#include <string.h>

int main () 
{
  char city[15];
  char st[3];
  char fullLocation[18] = "";

  puts("What town do you live in? ");
  gets(city);
 
  puts("What state do you live in? (2 letter abbreviation)");
  gets(st);

  strcat(fullLocation, city);
  strcat(fullLocation, ", ");
  strcat(fullLocation, st);

  puts("\nYou live in ");
  puts(fullLocation);  

  return (0);  
}