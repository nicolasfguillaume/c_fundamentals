/* Static variables: scope over the file containing them making them accessible 
   only inside a given file.
   Global variables: can be accessed outside the file too.
*/

#include <stdio.h>
int sum (int num) {
    // static variable can hold a value when the function completes.
	static int count = 0;
	count += num;
    return count;
}

int main() {
   printf("%d ",sum(55));
   printf("%d ",sum(45));
   printf("%d ",sum(50));
   return 0;
}