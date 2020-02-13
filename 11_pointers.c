/* 
Pointer: simple integer variable which holds a memory address that points to a value (can be a large
amount of memory), instead of holding the actual value itself. They are used for:
- Strings
- Dynamic memory allocation
- Sending function arguments by reference
- Building complicated data structures
- Pointing to functions
- Building special data structures (i.e. Tree, Tries, etc...)

### Example 1: Strings as pointers

char * name = "John";

does three things:

1. It allocates a local (stack) variable called name, which is a pointer 
   to a single character.
2. It causes the string "John" to appear somewhere in the program memory 
   (after it is compiled and executed, of course).
3. It initializes the name argument to point to where the J character resides 
   at (which is followed by the rest of the string in the memory).

If we try to access the name variable as an array, it will work, and will return 
the ordinal value of the character J, since the name variable actually points 
exactly to the beginning of the string.

Since we know that the memory is sequential, we can assume that if we move ahead 
in the memory to the next character, we'll receive the next letter in the string, 
until we reach the end of the string, marked with a null terminator 
(the character with the ordinal value of 0, noted as \0).

### Example 2: Dereferencing

Dereferencing is the act of referring to where the pointer points, 
instead of the memory address. 

Define a local variable a:
int a = 1;

Define a pointer variable, and point it to a using the & operator:
int *pointer_to_a = &a;

Change the variable a:
a += 1;

Changed the variable a again:
*pointer_to_a += 1;

printf("The value a is %d\n", a);
Dereferencing a pointer with * operator:
printf("The value of a is also %d\n", *pointer_to_a);
*/

#include <stdio.h>

int main() {
  int n = 10;

  // Define a pointer variable
  int *pointer_to_n = &n;
  // Dereferencing a pointer
  *pointer_to_n += 1;

  /* testing code */
  if (pointer_to_n != &n) return 1;
  if (*pointer_to_n != 11) return 1;

  printf("Done!\n");
  return 0;
}