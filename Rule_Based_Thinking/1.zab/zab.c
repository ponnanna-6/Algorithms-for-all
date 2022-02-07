#include "stdio.h"
#include "stdlib.h"

void zab(int,int);
int main(){
  zab(9,2);
}

void zab(int x1, int x2){
  int x=0,year=2002;
  printf("2000 : %d\n2001 : %d\n",x1,x2);
  while(x!=1){
    x=abs(x1-x2)+1;
    printf("%d : %d\n",year,x);
    x1=x2;
    x2=x;
    year++;
  }
}
