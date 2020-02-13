/* defines an array of 10 integers:
int numbers[10];
Notice that arrays in C are zero-based: 
- the array cells 0 through 9 (inclusive) are defined
- numbers[10] is not an actual value.
*/

#include <stdio.h>

int main() {
  int grades[3];
  int average;

  grades[0] = 80;
  grades[1] = 85;
  grades[2] = 90;

  average = (grades[0] + grades[1] + grades[2]) / 3;
  printf("The average of the 3 grades is: %d\n", average);

  return 0;
}