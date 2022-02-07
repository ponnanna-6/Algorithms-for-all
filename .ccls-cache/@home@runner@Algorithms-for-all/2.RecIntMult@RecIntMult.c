#include "stdio.h"
#include "math.h"
#include "NumberOfDigits.c"

int NumberOfDigits(long);
long RecIntMult(long a, long b, int n);

int main(void) {
  long x, y, product=1;
  printf("Enter X and Y : ");
  if(scanf("%ld %ld", &x, &y)){}
  product=RecIntMult(x, y, NumberOfDigits(x));
  printf("%ld %ld\n", x, y);
  printf("Product = %ld\n", product);
}

long RecIntMult(long x, long y, int n){
  long x1,x2,y1,y2;
  if(n==1){
    return x*y;
  }
  else{    
    x2= x % (long)(pow(10, (n/2)));     
    x1=(x-x2)/(long)pow(10, (n/2));
    y2=y % (long)pow(10, n/2);   
    y1=(y-y2)/(long)pow(10,(n/2));
    return ((long)pow(10,n)*RecIntMult(x1, y1, NumberOfDigits(x1)/2)+
            (long)pow(10,(n/2))*(RecIntMult(x1,y2,NumberOfDigits(x1)/2)+
            RecIntMult(x2, y1, NumberOfDigits(x2)/2))+
            RecIntMult(x2, y2, NumberOfDigits(x2)/2));
  }
}