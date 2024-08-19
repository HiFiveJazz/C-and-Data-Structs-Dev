#include "stdio.h"

int main(void){
int i = 0;
int j = 0; 
while (i<10) {
  j++;
  i++;
  if (j == 2)
    continue;
  printf("i: %d\n",i); 
}
  return 0;
}
