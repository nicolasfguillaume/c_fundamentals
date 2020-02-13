/* Define strings (use pointers to a character array -> read only):
char * name = "John Smith";
Define strings (allocates an array variable -> editable):
char name[] = "John Smith";
same as
char name[11] = "John Smith";
10 characters long + 1 for the string termination (0)

String format:
printf("%s is %d years old.\n", name, age);

String length:
strlen(name)

String comparison:
strncmp(name, "John", 4)

String concatenation:
strncat(dest, src, n);
*/

#include <stdio.h>
#include <string.h>

int main() {
  /* define first_name */
  char * first_name = "John";
  /* define last_name */
  char last_name[] = "Doe";
  char name[100];

  last_name[0] = 'B';
  sprintf(name, "%s %s", first_name, last_name);
  if (strncmp(name, "John Boe", 100) == 0) {
      printf("Done!\n");
  }
  name[0]='\0';
  strncat(name, first_name, 4);
  strncat(name, last_name, 20);
  printf("%s\n", name);
  return 0;
}