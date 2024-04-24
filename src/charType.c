#include <stdio.h>

int main()
{
	// the char type only store one character
	char myGrade = 'A';
	printf("this is a character: %c\n", myGrade);

	/*/
		but we can create an string
		an string is a list of characters

		format specifier: %s
	/*/
	
	char string[] = "this is a string";
	printf("%s", string);
	
	return 0;
}
