#include "stdio.h"
#include "math.h"


int RecIntMult(int x, int y, int n){
  int x1,x2,y1,y2;
  if(n==1){
    return x*y;
  }
  else{    
    x2= x % pow(10, (n/2));     
    x1=(x-x2) / (long)pow(10, (n/2));
    printf("%lf", pow(10, -1));
    printf("x y n x1 x2: %d %d %d %d %d", x,y,n,x1,x2);
    y2=y % int_pow(10, n/2);
    y1=(y-y2) * int_pow(10,(-n/2));
    return (int_pow(10,n)*RecIntMult(x, y, n/2)+
            int_pow(10,(n/2))*RecIntMult(x,y2,n/2)+
            RecIntMult(x2, y, n/2)+
            RecIntMult(x, y2, n/2));
  }
}