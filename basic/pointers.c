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

void func() {
	header("func");
	int func_name(int x, int y) {
		int z = x + y;
		return z;
	}
	// Creates a pointer with 2 int
	int (*func_point)(int, int);
	func_point = &func_name;
	// Can be: int (*func_point)(int, int) = &func_name;
	int result = func_point(5, 5);
	printf("result = %d", result);
}

// Reduces the overhead fo copying funcs
void func_param_point() {
	header("func_param_point");
	void swap(int *a, int *b) {
		int temp;
		temp = *a;
		*a = *b;
		*b = temp;
	}
	int x = 10, y = 20;
	printf("\t\tx and y: %d %d", x, y);
	swap(&x, &y);
	printf("\n(Swap)\tx and y: %d %d", x, y);
}

void func_param_return() {
	header("func_param_return");
	int *max(int *a, int *b) {
		// if 'a' is bigger than 'b' return 'a' else return 'b'
		// Returning memory addresses can become invalid after func terminates
		return (*a > *b) ? a : b;
	}
	int x = 5, y = 10;
	int *max_value = max(&x, &y);
	printf("max_value = %d", *max_value);
}

// Dynamic array size
void array_of_point() {
	header("array_of_point");
	//int *numbers[5];
	char* nome = "Carlos";
	// Can pass multiple elements with inicializate
	int arr[] = {1, 2, 3, 4, 5};
	int *arr_ptr = arr;
	int i;
	for (i = 0; i < 5; i++) {
		printf("Element %d = %d\n", i, *(arr_ptr + i));
	}
}

void dynamic_mem_aloc() {
	header("dynamic_mem_aloc");
	/* Functions
	 * malloc - Allocates memory and return the memory address
	 * caloc - Allocates memory for an array with specified size and initializes all elements to zero
	 * realloc - Deallocates the memory block pointed to by a given pointer
	 * free - Deallocates the memory block pointed to by a given pointer
	*/
	int *arr;
	int arr_size = 10;
	//arr = (int *)malloc (arr_size * sizeof(int));
	arr = malloc (arr_size * sizeof(int));
	if (arr != NULL) {
		//
	} else {
		printf("Memory allocation failed");
	}
	free(arr);
}
// TODO Dynamic Memory Allocation for Arrays in C 
int main() {
	func();
	func_param_point();
	func_param_return();
	array_of_point();
	dynamic_mem_aloc();
	return 0;
}
