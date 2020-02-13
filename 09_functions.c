/* 
Functions in C:
- receive either a fixed or variable amount of arguments.
- can only return one value, or return no value (keyword void).
- arguments are copied by value to functions, which means that we cannot change the 
  arguments to affect their value outside of the function. To do that, we must use pointers.
- must be first defined before they are used in the code. 
- by default, functions are global in C
 */

#include <stdio.h>

/* function declaration */
void print_big(int number);

int main() {
  int array[] = { 1, 11, 2, 22, 3, 33 };
  int i;
  for (i = 0; i < 6; i++) {
    print_big(array[i]);
  }
  return 0;
}

void print_big(int number) {
	if (number > 10) {
		printf("%d is big\n", number);
	}
}