#include <stdio.h>

int main(){
	int doorCode = 1337;

	(doorCode == 1337) ? printf("correct code\nthe door is now open.\n") : printf("wrong code \n the door remains closed\n");
	int num = 10;

	if (num > 0) {
		printf("the value is a positive number\n");
	} else if (num < 0) {
		printf("the value is a negative number\n");
	} else {
		printf("the value is 0\n");
	}

	int age = 25;
	int votinAge = 18;
	
	if (age >= votinAge){
		printf("old enough to vote!\n");
	} else {
		printf("not old enough to vote.\n");
	}

	return 0;
}

