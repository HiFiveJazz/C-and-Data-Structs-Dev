#include <stdio.h>

int main(int argc, char *argv[]){
  int numberOfArguments = argc;
  char *argument1 = argv[0];
  char *argument2 = argv[1];

  printf("Number of Arguments: %d\n", numberOfArguments);
  /* Note how the first line is always the program name (in this case it would be ./arguments).  */
  /* This is convenient for CLI purposes! */
  printf("Argument 1 is the program name %s\n", argument1);
  printf("Argument 2 is the command line argument: %s\n", argument2);
  return 0;
}
