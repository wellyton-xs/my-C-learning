#include <stdio.h>

int main(){
	int integer = 8; // can be -123
	float decimal = 19.99; // can be -19.99
	char letter = 'w'; // one single letter.

	printf("this is a int:%d\n", integer); // %d prints a integer
	printf("this is a float number:%f\n", decimal); // %f prints a float
	printf("this is a char:%c\n", letter); // %c prints a char


	/*/
		you can also print many vars 
		with diferent types in one single 
		print function.
	/*/

	printf("my number is: %d /n and my letter is: %c ", integer, letter);
	
	return 0;
	
}
