#include "math.h"
#include "stdio.h"
#include "RecIntMult.c"
#include "NumberOfDigits.c"

int RecIntMult(int a, int b, int n);
int main(void) {
  int x=1234,y=5678,n, product;
  n=NumberOfDigits(long num)
  // printf("Enter X and Y : ");
  // scanf("%d %d", &x, &y);
  product=RecIntMult(x, y, n);
  printf("Product = %d\n", product);
}