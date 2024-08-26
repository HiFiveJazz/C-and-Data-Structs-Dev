#include <stdio.h>
/* void add(); */
float absoluteValue();
int gcd(int x, int y);

int main(){
  float a = absoluteValue(-3);
  return 0;
}

int gcd(int x, int y) {
  int temp;
  while (y!=0){
    temp = x % y;
    x = y = temp;

  }

}

float absoluteValue(float x){
  if (x < 0) {
    x = x * -1;
  } 
  return x;
  printf("Absolute Value: %d\n",x);
  return x;
}

/* float squareRoot(float y){ */
/*   float abs = absoluteValue(y); */
/**/
/*   return x; */
/*   printf("Absolute Value: %d\n",x); */
/*   return x; */
/* } */
