#include <stdio.h>

int lenght_array(char* array) {
	int lenght = sizeof(array) / sizeof(array[0]);
	return lenght;
}

void reader(char* string) {
	printf("\n\t%s\n\n", string);
}

void hello_world() {
	reader("hello_world");
	//char text[] = "Hello World!";
	char* text = "Hello World!";
	printf("%s\n", text);
}

void for_loop_with_if() {
	reader("for_loop");
	int div_por_2[5];
	int n, i = 0;
	for (n = 0; n < 10; n++) {
		if (n % 2 == 0) {
			div_por_2[i] = n;
			i++;
		}
		printf("%d", n);
	}
	
	printf("\n");
	int lenght = sizeof(div_por_2) / sizeof(div_por_2[0]);
	//printf("%d", lenght);
	i = 0;
	for (i = 0; i < lenght; i++) {
		printf("%d ", div_por_2[i]);
	}
	printf("\n");
}

void while_loop() {
	reader("while_loop");
	char* text = "Banana";
	int lenght = lenght_array(text);
	int i = 0;
	while (i < lenght) {
		printf("%c ", text[i]);
		i++;
	}
	printf("\n");
}

void colors(char* message) {
	reader("colors");
	char* reset = "\e[0m";
	char* BLUE = "\e[0;34m";
	printf("%s%s%s", BLUE, message, reset);
}
int main() {
	hello_world();
	for_loop_with_if();
	while_loop();
	colors("Hello World");
	return 0;
}
