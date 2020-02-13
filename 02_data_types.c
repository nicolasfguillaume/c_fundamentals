/*
C has several types of variables:
- Integers - whole numbers which can be either positive or negative. 
  Defined using char, int, short, long or long long.
- Unsigned integers - whole numbers which can only be positive. 
  Defined using unsigned char, unsigned int, unsigned short, unsigned long or unsigned long long.
- Floating point numbers - real numbers (numbers with fractions). 
  Defined using float and double.
- Structures - will be explained later, in the Structures section.
No boolean type in C:
#define BOOL char
#define FALSE 0
#define TRUE 1
*/

#include <stdio.h>

int main() {
  int a = 3;
  float b = 4.5;
  double c = 5.25;
  float sum;

  sum = a + b + c;

  printf("The sum of a, b, and c is %f.\n", sum);
  return 0;
}