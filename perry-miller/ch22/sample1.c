#include <stdio.h>

int main ()
{
  int ctr;
  int idSearch;
  int found = 0;

  int custID[10] = {313, 453, 502, 101, 892, 475, 792, 912, 343, 633};
  float custBal[10] =
  {
    0.00, 45.43, 71.23, 301.56, 9.08, 
    192.41, 389.00, 229.67, 18.31, 59.54
  };

  printf("*** Customer Balance Lookup ***\n");
  printf("What customer number do you need to check? ");
  scanf(" %d", &idSearch);
  
  for (ctr = 0; ctr < 10; ctr++)
  {
    if (idSearch == custID[ctr])
    {
      found = 1;
      break;
    }    
  }

  if (found)
  {
    if (custBal[ctr] > 100)
    {
      printf("\n** That customer's balance is $%.2f.\n", custBal[ctr]);
      printf(" No additional cred.\n");
    } else
    {
      printf("\n** The customer's credit is good.\n");
    }
  } else
  {
    printf("** You must have typed an incorrect customer ID.");
    printf("\nID %d was not found in list.\n", idSearch);
  }

  return (0);
  
}