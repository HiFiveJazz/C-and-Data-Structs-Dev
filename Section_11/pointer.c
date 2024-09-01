#include <stdio.h>
#include <stdlib.h>
/* #include <stddef.h> */
int number, *pNumber = 0;


int main () {
  int number = 100;
  int *pNumber = &number;
  printf("Number Address: %p\n",&number);
  printf("Number Value: %p\n",number);
  printf("Pointer Address: %p\n",&*pNumber);
  printf("Pointer Value: %p\n",*pNumber);
}
