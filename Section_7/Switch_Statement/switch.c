#include "stdio.h"

int main(){
  enum Weekday {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};
  enum Weekday today = Monday;

  switch (today) {
    case Monday:
      printf("Today is Monday\n");
    case Tuesday:
      printf("Today is Tuesday\n");
      break;
  }
  return 0;
}
