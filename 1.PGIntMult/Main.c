#include "math.h"
#include "stdio.h"
#include "PGIntMult.c"

long PGIntMult(long a, long b);
int main(void) {
  long x,y, product;
  printf("Enter X and Y : ");
  scanf("%ld %ld", &x, &y);
  product=PGIntMult(x, y);
  printf("Product : %ld \nOriginal:%ld\n",product, (x*y));
}