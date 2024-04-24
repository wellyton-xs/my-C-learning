#include <stdio.h>

int main(){
	// (integer) specifier: %d or i
	int num = 1000;
	printf("int: %i\n", num);

	// (float) specifier: %f or %F
	float numFloat = 5.75;
	printf("float: %f\n", numFloat);
	
	// (double) specifier: %lf
	double numDouble = 19.99;
	printf("double: %lf\n", numDouble);

	/*/ double x float

		the diferences are:

		float: 4 bits, 7 digits of precision
		double: 8 bits, 15 digits of precision
		
	/*/
	
	// scientific numbers
	float scientificFLoat = 35e3;
	double scientificDouble = 12E4;
	printf("scientific fLoat: %f\n", scientificFLoat);
	printf("scientific double: %lf", scientificDouble);
	
	return 0;
}
