#include<stdio.h>
void hospital (int input) {
	for (int i = 1; i <= input; i++) {
		for (int j = 1; j <= input; j++) {
			printf("  ");
		}
		for (int j = 1; j <= input; j++) {
			printf("* ");
		}
		printf("\n");
	}
	for (int i = 1; i <= input; i++) {
		for (int j = 1; j <= input; j++) {
			printf("* ");
		}
		for (int j = 1; j <= input; j++) {
			printf("* ");
		}
		for (int j = 1; j <= input; j++) {
			printf("* ");
		}
		printf("\n");
	}
	for (int i = 1; i <= input; i++) {
		for (int j = 1; j <= input; j++) {
			printf("  ");
		}
		for (int j = 1; j <= input; j++) {
			printf("* ");
		}
		printf("\n");
	}
	printf("\n");
}
int main() {
	int x;
	printf("Enter number : ");
	scanf_s("%d", &x);
	hospital(x);
	hospital(x);
	hospital(x);
	return 0;
}