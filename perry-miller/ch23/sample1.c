#include <stdio.h>

int main () {
  int ctr;
  int idSearch;
  int found = 0;

  int custID[10] = {313, 453, 502, 101, 892, 475, 792, 912, 343, 633};
  float custBal[10] =
  {
    0.00, 45.43, 71.23, 301.56, 9.08, 
    192.41, 389.00, 229.67, 18.31, 59.54
  };
  
  // For sorting
  int tempID, inner, outer, didSwap, i; 
  float tempBal;

  // Sorting both arrays
  for (outer = 0; outer < 9; outer++)
  {
    didSwap = 0;
    for (inner = outer + 1; inner < 10; inner++)
    {
      if (custID[inner] < custID[outer])
      {
        tempID = custID[inner];
        tempBal = custBal[inner];

        custID[inner] = custID[outer];
        custBal[inner] = custBal[outer];

        custID[outer] = tempID;
        custBal[outer] = tempBal;

        didSwap = 1;
      }      
    }
    if (didSwap == 0)
    {
      break;
    }    
  }

  printf("\n\n*** Customer Balance Lookup ***\n");
  printf("What is the customer number? ");
  scanf(" %d", &idSearch);

  /*
    Searching the array until the ID is found or if not found only until the 
    ID inputed is smaller than the current ID  
  */
  for (ctr = 0; ctr < 10; ctr++)
  {
    if (idSearch == custID[ctr])
    {
      found = 1;
      break;
    }
    if (custID[ctr] > idSearch)
    {
      break;
    }
  }

  // In case the ID is found, it's verified the balance
  if (found)
  {
    if (custBal[ctr] > 100)
    {
      printf("\n** That customer's balance is $%.2f\n", custBal[ctr]);
      printf("No additional credit.\n");
    }
    else
    {
      printf("\n**The customer's credit is good!\n");
    }
  } else
  {
    printf("\n** You've entered an incorred customer ID");
    printf("\n ID %3d was not found.\n", idSearch);
  }

  return (0);
  
}