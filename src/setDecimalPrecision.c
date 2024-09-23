#include <stdio.h>

int main(){

  float num = 5; // outputs 5.000000
  printf("%f\n", num);

  // you can set the number of the digits.

  printf("%.1f\n", num);
  printf("%.2f\n", num);
  printf("%.3f", num);
  return 0;
}
