#include <stdio.h>

int main(){
	
  // short hand if else
	
  /*
    syntax:
    variable = (condition) ? expressionTrue : expressionFalse; 
  */

  // long way
	
  int time = 20;
  if (time < 18){
    printf("good day.");
  } else {
    printf("good evening");
  }
	
  // short way
  (time < 18) ? printf("good day") : printf("good evening");
	
  return 0;
}

