#include <stdio.h>

int main(){
	int day = 4;
	
	switch (day) {
		case 1:
			printf("monday\n");
		case 2:
			printf("tuesday\n");
		case 3:
			printf("wednesday\n");
		case 4:
			printf("thursday\n");
		case 5:
			printf("friday\n");
		case 6:
			printf("saturday\n");
		case 7:
			printf("sunday\n");

		default:
			printf("i dont know\n");
	}

	return 0;
}

