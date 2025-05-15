#include <stdio.h>

int main () {
  int ctr = 0; 
  
  printf("Counter is at %d.\n", ctr++); 
  printf("Counter is at %d.\n", ctr++); 
  printf("Counter is at %d.\n", ctr++); 
  printf("Counter is at %d.\n", ctr++); 
  printf("Counter is at %d.\n", ctr++);
  
  printf("Counter is at %d.\n", ctr--); 
  printf("Counter is at %d.\n", ctr--); 
  printf("Counter is at %d.\n", ctr--); 
  printf("Counter is at %d.\n", ctr--); 
  
  return 0;
}