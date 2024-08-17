#include <stdio.h>

int main () {
  int minutes;
  printf("Enter a number of minutes:\n");
  scanf("%d", &minutes);
  printf("Minutes: %d\n",minutes);
  double hours = (float)minutes / 60;
  double days = hours / 24;
  double years = days / 365;
  printf("Hours: %.2lf\n",hours);
  printf("Days: %.2lf\n",days);
  printf("Years: %.2lf\n",years);
  return 0;
}
