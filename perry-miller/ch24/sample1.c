#include <stdio.h>

int main () 
{
  int kids;
  int * pKids;
  float price;
  float * pPrice;
  char code;
  char * pCode;

  price = 17.50;
  pPrice = &price;

  printf("\nHow many kids are you taking to the water park? ");
  scanf(" %d", &kids);

  pKids = &kids;

  printf("\nDo you have a discount ticket for the park?");
  printf("\nEnter E for Employee Discount, S for Sav-More ");
  printf("Discount, or N for No Discount: ");
  scanf(" %c", &code);

  pCode = &code;

  printf("\nFirst let's do it with the variables:\n");
  printf("You've got %d kids...\n", kids);
  switch (code)
  {
  case 'E':
    printf("The employee discount saves you 25%% on the ");
    printf("$%.2f price", price);
    printf("\nTotal ticket cost: $%.2f\n", (price*.75*kids));
    break;

  case 'S':
    printf("The Sav-more discount saves you 15%% on the ");
    printf("$%.2f price", price);
    printf("\nTotal ticket cost: $%.2f\n", (price*.85*kids));
    break;
  
  default:
    printf("You'll be paying full price of ");
    printf("$%.2f for your tickets\n", price);
    break;
  }

  // Repeating the same code but now with pointers
  printf("\n\nNow let's do it with the pointers:\n");
  printf("You've got %d kids...\n", *pKids);
  switch (*pCode)
  {
  case 'E':
    printf("The employee discount saves you 25%% on the ");
    printf("$%.2f price", *pPrice);
    printf("\nTotal ticket cost: $%.2f\n", (*pPrice*.75*kids));
    break;

  case 'S':
    printf("The Sav-more discount saves you 15%% on the ");
    printf("$%.2f price", *pPrice);
    printf("\nTotal ticket cost: $%.2f\n", (*pPrice * .85 * *pKids));
    break;
  
  default:
    printf("You'll be paying full price of ");
    printf("$%.2f for your tickets\n", *pPrice);
    break;
  }

  return (0);
}