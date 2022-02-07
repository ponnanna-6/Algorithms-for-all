#include "stdio.h"

int NumberOfDigits(long num){
  int n=0;
  while(num!=0){
    num=num/10;
    n++;
  }
  return n;
}