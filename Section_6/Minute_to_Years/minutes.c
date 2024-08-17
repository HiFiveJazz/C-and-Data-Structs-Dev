#include <stdio.h>

int main () {
  int minutes;
  printf("Enter a number of minutes:\n");
  scanf("%d", &minutes);
  printf("Minutes: %d\n",minutes);
  float hours = (float)minutes / 60;
  float days = hours / 24;
  float years = days / 365;
  printf("Hours: %.2f\n",hours);
  printf("Days: %.2f\n",days);
  printf("Years: %.2f\n",years);
  return 0;
}
