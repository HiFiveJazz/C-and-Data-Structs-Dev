#include <stdio.h>
#include <stdbool.h>

int main(){
  enum company {GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT};
  enum company google = GOOGLE, xerox = XEROX, ebay = EBAY;
  printf("%d\n", xerox);
  printf("%d\n", google);
  printf("%d\n", ebay);
  return 0;
}
