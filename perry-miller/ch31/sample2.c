#include <stdio.h>
#include <string.h>

int main()
{
  char name[15] = "Michael Hatton";
  change(name);
  printf("Back in main(), the name is now %s.\n", name);

  return 0;

}

/******************************************************************************/

change(char name[15])
{
  strcpy(name, "XXXXXXXXXXXXXX");
  return;
}