#include <stdio.h>
#include <string.h>

int main () {
  char Kid1[12];
  char Kid2[] = "Maddie";
  char Kid3[7] = "Andrew";
  char Hero1[7] = "Batman";
  char Hero2[34] = "Spiderman";
  char Hero3[25];

  Kid1[0] = 'K';
  Kid1[1] = 'a';
  Kid1[2] = 't';
  Kid1[3] = 'i';
  Kid1[4] = 'e';
  Kid1[5] = '\0';

  strcpy(Hero3, "The Incredible Hulk");

  printf("%s\'s favorite hero is %s\n", Kid1, Hero1);
  printf("%s\'s favorite hero is %s\n", Kid2, Hero2);
  printf("%s\'s favorite hero is %s\n", Kid3, Hero3);

  return 0;
}