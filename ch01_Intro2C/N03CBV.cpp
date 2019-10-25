#include <stdio.h>

void addTen(int);

int main() {
	int input;
	
	
	printf("Input: ");
	scanf_s("%d", &input);
	printf("Input value: %d \n", input);

	addTen(input);

	printf("\nInput value after calling a function: %d", input);

	return 0;
}

void addTen(int n) {
	n = n + 10;
	printf("Input value turned to be %d in called function", n);
}

