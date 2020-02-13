/* 
C structures are special, large variables which contain several named variables inside. 
Structures are the basic foundation for objects and classes in C. Structures are used for:
- Serialization of data
- Passing multiple arguments in and out of functions through a single argument
- Data structures such as linked lists, binary trees, and more

Typedefs allow us to define types with a different name.
We can use the following syntax to remove the struct keyword from each time we want 
to define a new point:

typedef struct {
    int x;
    int y;
} point;

Define a new point:
point p;

To access the point's variables, we use the dot . operator:
p.x = 10;
p.y = 5;
*/

#include <stdio.h>

typedef struct {
	char *name;
	int age;
} person;

int main() {
    person john;

    /* testing code */
    john.name = "John";
    john.age = 27;
    printf("%s is %d years old.\n", john.name, john.age);
}