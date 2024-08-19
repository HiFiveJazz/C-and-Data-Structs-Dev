#include "stdio.h"
#include "stdlib.h"

int main(){
  /* Cast Operator! */
  int d = (int) 26.51;
  printf("26.51 has become %d via converting from a float to a int!\n", d);
  printf("\n");
  /* sizeof Operator */
  // The sizeof Operator returns the how many bites a value takes;

  printf("Longs: \n");
  printf("Long:          %zd Bytes\n", sizeof(long));
  printf("Long Long:     %zd Bytes\n", sizeof(long long));

  printf("\n");
  printf("Integers: \n");
  printf("Short Int:     %zd Bytes\n", sizeof(short int));
  printf("Int:           %zd Bytes\n", sizeof(int));
  printf("Signed Int:    %zd Bytes\n", sizeof(signed int));
  printf("Unsigned Int:  %zd Bytes\n", sizeof(unsigned int));
  printf("Long Int:      %zd Bytes\n", sizeof(long int));
  printf("Long Long Int: %zd Bytes\n", sizeof(long long int));

  printf("\n");
  printf("Floats: \n");
  printf("Float:         %zd Bytes\n", sizeof(float));

  printf("\n");
  printf("Doubles: \n");
  printf("Double:        %zd Bytes\n", sizeof(double));
  printf("Long Double:   %zd Bytes\n", sizeof(long double));

  printf("\n");
  printf("Chars: \n");
  printf("Char:          %zd Byte(s)\n", sizeof(char));
  printf("Signed Char:   %zd Byte(s)\n", sizeof(signed char));
  printf("Unsigned Char: %zd Byte(s)\n", sizeof(unsigned char));


  return 0;
}
