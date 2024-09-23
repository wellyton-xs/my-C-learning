#include <stdio.h>
#include <stdbool.h>

int main(){

  /*/
    1: booleans are returned as a integer
    2: booleans can only returns two values
    /*/
  
	
  bool isProgrammingFun = true;
  printf("is programming fun? %d", isProgrammingFun);

  // you can verify the result of a comparison with a bool value
  int x = 10;
  int y = 9;
  printf("%d", x > y);
	
  return 0;
}

