#include<stdio.h>
void function() {
	int input;
	printf("Enter number : ");
	scanf_s("%d", &input);
	for (int i = 1; i <= x; i++) {
		for (int j = 1; j <= x; j++) {
			printf("  ");
		}
		for (int j = 1; j <= x; j++) {
			printf("* ");
		}
		printf("\n");
	}
	for (int i = 1; i <= x; i++) {
		for (int j = 1; j <= x; j++) {
			printf("* ");
		}
		for (int j = 1; j <= x; j++) {
			printf("* ");
		}
		for (int j = 1; j <= x; j++) {
			printf("* ");
		}
		printf("\n");
	}
	for (int i = 1; i <= x; i++) {
		for (int j = 1; j <= x; j++) {
			printf("  ");
		}
		for (int j = 1; j <= x; j++) {
			printf("* ");
		}
		printf("\n");
	}
}
int main() {
	function();
	return 0;
}