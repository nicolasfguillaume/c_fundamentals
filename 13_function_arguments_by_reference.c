/* Function arguments are passed by value, which means they are copied 
in and out of functions. But what if we copied pointers to values instead 
of the values themselves? This will enable us to give functions control over 
variables and structures of the parent functions, and not just a copy of them.
*/

#include <stdio.h>

typedef struct {
  char *name;
  int age;
} person;

/* function declaration */
void birthday(person *p);

// Pointers to structures: we can now send only one pointer to the function of the person structure.
void birthday(person *p) {
	/* The function receives a pointer to the variable n as an argument, and 
	   knows the memory address of the variable n (and won't just receive a copy 
	   of the variable itself).
	   Now we dereference a structure and access one of it's internal members:
	   (*p).age++;
	   equivalent to */
	p->age++;
}

int main() {
  person john;
  john.name = "John";
  john.age = 27;

  printf("%s is %d years old.\n", john.name, john.age);
  // pass a reference to the variable n, and not the variable itself:
  birthday(&john);
  printf("Happy birthday! %s is now %d years old.\n", john.name, john.age);

  return 0;
}