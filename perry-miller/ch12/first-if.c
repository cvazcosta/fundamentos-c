#include <stdio.h>

int main () {
  char name[25];
  printf("What's your last name? ");
  scanf(" %s", name);

  if (name[0] >= 'P' && name[0] <= 'S' )
  {
    printf("You must go to the room 2432 for your tickets\n");
  }
  else
  { 
    printf("You can get your tickets here\n");
  }

  return 0;  
  
}