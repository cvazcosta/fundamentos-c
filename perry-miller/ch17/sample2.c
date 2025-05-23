#include <stdio.h>
#include <stdlib.h>

int main () {
  int choice1, choice2;

  printf("What do you want to see?\n");
  printf("1. The 1980's\n");
  printf("2. The 1990's\n");
  printf("3. The 2000's\n");
  printf("4. Quit\n");

  do
  {
    printf("Enter your choice: ");
    scanf(" %d", &choice1);
    switch (choice1)
    {
    case (1):
    {
      printf("\n\nWhat would you like to see\n");
      printf("1. Baseball\n");
      printf("2. The Movies\n");
      printf("3. US Presidents\n");
      printf("4. Quit\n");

      printf("Enter your choice: ");
      scanf(" %d", &choice2);

      /*
        Aqui poderia ser um impulso natural querer fazer uso de um novo switch
        para o segundo menu, porém o autor explicou que fazer isto confundiria
        o compilador e o programa não seria executado corretamente
      */
      if (choice2 == 1)
      {
        // Código indicando os campeões de baseball dos anos 80
      }
     
      break;
    }
    
    default:
      break;
    }
  } while (choice1 < 1 || choice1 > 4);
  
}