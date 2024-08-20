#include <stdio.h>
#include <stdbool.h>
int i, j, k, l, primeCounter = 0, condition = 1;
int prime[100], numbers[100];
bool primeFlag = true;

int main (){
  /* Intialize numbers array */
  for (k = 0; k <= 100; k++){
    numbers[k] = (k+2);
  }
  for (i = 0; i <= 100; i++){
    primeFlag = true;


    for (j = 0; j <= 100; j++){
      condition = (numbers[i] % numbers[j]);
      if (condition == 0 && numbers[j] < numbers[i]) {
        primeFlag = false;
      }
    }


    if (primeFlag == true) { 
      prime[primeCounter] = numbers[i]; 
      primeCounter++;
    }
  }
  for (l = 0; l <= 100; l++){
    printf("%d\n", prime[l]);
  }
  return 0;
}

