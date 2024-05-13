#include <stdio.h>
#include <stdbool.h>

int main(){
	int myAge = 25;
	int votinAge = 18;

	printf("can i vote with %d? response: %d\n", myAge ,myAge >= votinAge);
	return 0;
}

