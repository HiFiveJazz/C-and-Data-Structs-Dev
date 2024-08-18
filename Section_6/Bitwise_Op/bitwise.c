#include <stdio.h>

/*Ignore the following function, just helps understanding better!*/
void printBinary(unsigned int num) {
    unsigned int mask = 1 << (sizeof(num) * 8 - 1);  // Create a mask for the most significant bit

    // Print each bit from the most significant to the least significant
    for (int i = 0; i < sizeof(num) * 8; i++) {
        putchar((num & mask) ? '1' : '0');
        mask >>= 1;  // Shift the mask to the right
        if ((i + 1) % 8 == 0 && i != sizeof(num) * 8 - 1) {
            putchar(' ');  // Optional: Add space for readability every 8 bits
        }
    }
    putchar('\n');
}
/* 

& - AND 
 | - OR 
 ^ - XOR 
 ~ Binary Ones Complement (Flips bit) 
 << - Ones Complement 
 >> - Right Shift Operator 

*/

int main(){
  unsigned int a = 60; /* 0011 1100 */
  unsigned int b = 13; /* 0000 1101 */
  int result = 0;

  // ----- AND GATE ----
  unsigned int c = a & b;
  // 0000 1100 = 2^2 + 2^3  = 12
  printf("AND Gate Result: ");
  printBinary(c);

  // ----- OR GATE ----
  unsigned int d = a | b;
  printf("OR Gate Result: ");
  printBinary(d);
  // 0011 1101 = 2^0 + 2^2 + 2^3 + 2^4 + 2^5 = 61

  // ---- XOR GATE ----
  unsigned int e = a ^ b;
  printf("XOR Gate Result: ");
  printBinary(e);
  // 0011 0001  = 2^0 + 2^4 + 2^5 = 49

  // ---- BINARY ONE'S COMPLEMENT ----
  unsigned int f = ~a;
  printf("Binary One's Complement (Bit Flip): ");
  printBinary(f);
  // 1100 0011, flips the bit completely!

  // ---- LEFT SHIFT OPERATOR ----
  unsigned int g = a << 2;
  printf("Left Shift Operator by 2: ");
  printBinary(g);
  // 0011 1100 --> 1111 0000, Shifted to the Left by 2 

  // ---- RIGHT SHIFT OPERATOR ----
  unsigned int h = a >> 2;
  printf("Right Shift Operator by 2: ");
  printBinary(h);
  // 0011 1100 --> 0000 1111, Shifted to the Right by 2
  
  return 0;
}
