#include <stdio.h>

int main(){

  // implicit conversion
	
  // the compiler will convert this int to a float
  float numberNine = 9;

  printf("%f", numberNine);

  // another example
  int ninePointNineNine = 9.99;
	
  printf("%d", ninePointNineNine); 

  // explicit conversion

  int five = 5;
  int two = 2;
	
  float sum = (float) five / two;
	
  printf("%f", sum); 
}
