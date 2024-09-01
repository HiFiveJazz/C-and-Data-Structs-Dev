#include <stdio.h>

void square(int * const x);

int main (){
  int num = 9;
  square(&num);
  printf("Square: %d\n",num);
  return 0;
}

void square(int * const x){
  *x = *x * *x;
}
