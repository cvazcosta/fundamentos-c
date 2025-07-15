#include <stdio.h>

struct car {
  char *name;
  float price;
  int speed;
};

void set_price(struct car *c, float price);

void main(void)
{
  struct car saturn = {.speed=175, .name="Saturn SL/2"};

  // Pass a pointer to this struct car, along with a new,
  // more realistic, price:
  set_price(&saturn, 567.78);

  printf("Price: %.2f\n", saturn.price);
}

void set_price(struct car *c, float price)
{
  c->price = price;
}