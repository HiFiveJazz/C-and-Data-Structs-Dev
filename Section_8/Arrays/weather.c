#include <stdio.h>

int main(void) {
  int i, j;
  int array[2][3] = { 
  {10, 5, 12},
  {1, 2, 3},
}; 
  for (i = 0; i <= 1; i++){
    for (j = 0; j <= 2; j++){
      printf("%d ",array[i][j]);
    }  
      printf("\n");
  }  

  return 0;
}
