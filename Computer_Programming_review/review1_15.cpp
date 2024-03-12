#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void) {

	int a[5] = { 1,2,3,4,5 };
	int SIZE = (sizeof(a) / sizeof(int));
	int temp;
	
	printf("기존 배열");
	printf("\n");
	for (int i = 0; i < SIZE; i++) {
		printf("%d ", a[i]);
	}

	for (int i = 0; i < SIZE / 2; i++) {
		temp = a[i];
		a[i] = a[SIZE - i - 1];
		a[SIZE - i - 1] = temp;
	}
	printf("\n");
	printf("역순배열");
	printf("\n");
	for (int i = 0; i < SIZE; i++) {
		printf("%d ", a[i]);
	}
	return 0;
}
