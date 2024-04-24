#include <stdio.h>

int main(){
	int integer = 5;
	float decimal = 5.99; // goes to 7 digits
	double bigDecimal = 5.99; // goes to 15 digits
	char myLetter = 'D';

	/*/ format specifiers:

		| %d or %i |   ->	int
		| %f or %F |   ->  	float
		|   %lf    |   -> 	double
		|    %s    |
	/*/

	printf("integer(int): %i\n", integer);
	printf("decimal(float): %f\n", decimal);
	printf("large decimal(double): %lf\n", bigDecimal);
	printf("caracter(char): %c", myLetter);
	return 0;
}
