#include <stdio.h>

int fact(int n){
  if (n==0){
    return 1;
  }
  else {
    return n * fact(n-1);
  }
}

int nCr(int n,int r){
  int num, den; 
  num = fact(n);
  den=fact(r)*fact(n-r);
  return num/den;
}

int main(void)
{
  printf("%d \n", nCr(5,2));
  return 0;
}
