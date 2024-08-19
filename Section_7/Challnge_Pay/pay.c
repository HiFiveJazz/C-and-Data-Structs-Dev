#include "stdio.h"

int main(){
  float basicPayRate = 12.00, tax, pay; 
  int hour = 41, overtimeHours = 0;

  /* float pay = hour > 40 ? ((hour - 40) * 1.5) + (hour - 40) * :   */

  if (hour > 40){
    overtimeHours = hour - 40;
    pay = (overtimeHours * basicPayRate * 1.5) + (40 * basicPayRate); 
  } 
  else {
    pay =  hour * basicPayRate;
  }

  if (pay > 450) {
    tax = 0.15 * 300 + 0.2 * 150 + (0.25 * (pay - 450)); 
  } 
  else if (pay > 300) {
    tax = 0.15 * 300 + (0.2 * (pay - 300)); 
  } else {
    tax = 0.15 * pay;
  }

  float payAfterTax = pay - tax;
  printf("Work Hour: %d\n", hour);
  printf("Overtime Hours: %d\n", overtimeHours);
  printf("Pay: %f\n", pay);
  printf("Tax: %f\n", tax);
  printf("Payment after Tax: %f\n", payAfterTax);



  return 0;
}
