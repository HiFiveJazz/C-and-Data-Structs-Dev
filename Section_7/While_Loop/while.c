#include "stdio.h"

int main(void) {

  int i = 0;
  while (i<=10) {
    printf("%d\n",i);
    ++i;
  }
 
  int j = 0;
    printf("Printing J\n");
  do {
    printf("%d\n",j);
    j++;
  } while (j<=10);

  return 0;
}
