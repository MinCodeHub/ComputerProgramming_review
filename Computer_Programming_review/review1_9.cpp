#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int i = 0;
	int a[5] = { 10,20,30,40,50 };
	int r[5];
	
	for (i = 0; i < 5; i++) {
		r[i] = a[5 - i - 1];
	}
	printf("a[] <-");
	for (i = 0; i < 5; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
	printf("r[] <-");
	for (i = 0; i < 5; i++) {
		printf("%d ", r[i]);
	}
	return 0;
}
