#include <stdio.h>

int main(){
  // you can declare many variables
  int x = 5, y = 6, z = 50;
  int t, u, v, w;

  // you can assign the same value for all.
  w = t = u = v = 50;
	
  printf("t, u, v, w:= %d %d %d %d\n", t, u, v, w);
  printf("x,y,z:= %d %d %d\n", x, y, z); 
  printf("%d\n", x + y + z);
	
	
  return 0;
}
