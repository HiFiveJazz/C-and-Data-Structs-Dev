#include "stdio.h"

int main(){
  /* Cast Operator! */
  int d = (int) 26.51;
  printf("26.51 has become %d via converting from a float to a int!\n", d);
  printf("\n");
  /* sizeof Operator */
  // The sizeof Operator returns the how many bites a value takes;

  printf("Longs: \n");
  printf("Long:          %d Bytes\n", sizeof(long));
  printf("Long Long:     %d Bytes\n", sizeof(long long));

  printf("\n");
  printf("Integers: \n");
  printf("Short Int:     %d Bytes\n", sizeof(short int));
  printf("Int:           %d Bytes\n", sizeof(int));
  printf("Signed Int:    %d Bytes\n", sizeof(signed int));
  printf("Unsigned Int:  %d Bytes\n", sizeof(unsigned int));
  printf("Long Int:      %d Bytes\n", sizeof(long int));
  printf("Long Long Int: %d Bytes\n", sizeof(long long int));

  printf("\n");
  printf("Floats: \n");
  printf("Float:         %d Bytes\n", sizeof(float));

  printf("\n");
  printf("Doubles: \n");
  printf("Double:        %d Bytes\n", sizeof(double));
  printf("Long Double:   %d Bytes\n", sizeof(long double));

  printf("\n");
  printf("Chars: \n");
  printf("Char:          %d Byte(s)\n", sizeof(char));
  printf("Signed Char:   %d Byte(s)\n", sizeof(signed char));
  printf("Unsigned Char: %d Byte(s)\n", sizeof(unsigned char));


  return 0;
}
