#include <stdio.h>

int main(){
  int num = 0;
  int otherNum = 1;
  int empty;

  // assign values of other variables
  num = otherNum;
  empty = num;
  int sum = empty + otherNum;

  printf("%d\n", empty);
  printf("%d", sum);
}
