#include <stdio.h>

void header(char *text) {
	printf("\n\n\t\t%s\n\n", text);
}

/* Definition
 * A poiter is a variable that stores the memory addrees of another function
 * Give direct access to the memory
*/
/* Types
 * Null - Points to nothing
 * Void - Point to any data type (must be type-casted)
 * Array - Points to the first element of an array
 * Function
 * Structure
*/
void basic() {
	header("basic");
	int x = 4;
	// int* = modified a type or point to
	// & = the address of
	int* pX = &x;
	// *pX = Go to address and grep the value
	int y = *pX;
	printf("x = %d\n", x);
	printf("pX = memory\n");
	printf("y = %d\n", y);
}

int main() {
	basic();
	return 0;
}
