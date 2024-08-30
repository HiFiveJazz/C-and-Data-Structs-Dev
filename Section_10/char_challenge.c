#include <stdio.h>
int numberOfCharacters(char* string);
void concatenate(char* str1, char* str2);

int main() {
  char test[100] = "test";
  char test2[100] = "hello";
  numberOfCharacters(test);
  concatenate(test, test2);
  return 0;
}

int numberOfCharacters(char* string) {
  int i = 0;
  printf("String: %s\n", string);
  while (string[i] != '\0') {
    i++;
  }
  printf("Number of Characters: %d\n", i);
  return i;
}

void concatenate(char* str1, char* str2) {
  int len, j;
  len = numberOfCharacters(str1) + 1;
  for (j=0; str2[j] != '\0'; j++, len++){
    str2[len] = str1[j];
  }
  str2[len] = '\0';
  printf("len: %d\n", len);
  printf("Concatentate: %s\n", str2);
}

