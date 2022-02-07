#include <stdio.h>

int PGIntMult(int x, int y){
  int parsesum=0;
  int prod =0;
  int m=1;
  while(y!=0){
    parsesum=y%10;
    y=y/10;   
    parsesum=parsesum*m;
    prod=prod+(x*parsesum);
    m=m*10;
  }
  return prod;

}

int main(void) {
  int x,y, product;
  printf("Enter X and Y : ");
  scanf("%d %d", &x, &y);
  product=PGIntMult(x, y);
  printf("Product = %d\n", product);
}