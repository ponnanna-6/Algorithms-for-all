#include <stdio.h>

long PGIntMult(long x, long y){
  long parsesum=0, prod=0, m=1;
  while(y!=0){
    parsesum=y%10;
    y=y/10;   
    parsesum=parsesum*m;
    prod=prod+(x*parsesum);
    m=m*10;
  }
  return prod;
}
