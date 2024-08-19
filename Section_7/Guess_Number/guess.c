#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>


int main() {
  
  /* Random Number Generation and initializing variables */
  time_t t;
  srand((unsigned)time(&t));
  int tries = 5, guess, randomNumber = rand() % 21;
  bool numberInRange;
  printf("This is a guessing game\n");
  printf("I have chosen a number between 0 and 20 which you must guess.\n");
  do {
  printf("You have %d tries left\n",tries);
  
  /* Looping for ensuring number is between 0 and 20*/
  do { 
    printf("Enter a guess: ");
    scanf("%d",&guess);
      if (guess > 20 || guess < 0) {
          numberInRange = false;
          printf("Your number is not between 0 and 20\n");
          continue;
        }
    numberInRange = true;
  } while(numberInRange = false);

    if (guess > randomNumber) {
      printf("Your guess is \e[1m\e[4m\e[3mgreater\e[0m than the random number.\n");
    } 
    if (guess < randomNumber) {
      printf("Your guess is \e[1m\e[4m\e[3mless\e[0m than the random number.\n");
    } 
    if (guess == randomNumber) {
      printf("Congratulations. You guessed it!\n");
      break;
    } 
    tries = tries -1;
  } while (tries > 0);
  if (tries == 0) {
    printf("You lost. The number was %d.\n",randomNumber); 
    printf("Better luck next time!\n");
  }
  return 0;
}

/* debug */
/* printf("Guess: %d\n",guess); */
/* printf("randomNumber: %d\n", randomNumber); */
