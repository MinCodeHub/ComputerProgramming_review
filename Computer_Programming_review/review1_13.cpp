#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<malloc.h>
#include<stdlib.h>


int main(void) {

	int a[] = { 11, 22, 33, 44, 55, 66, 77, 88, 99, 100 };
	const int SIZE = (sizeof(a) / sizeof(int));

	int odd[SIZE/2];
	int even[SIZE/2];

	int evenIndex = 0;
	int oddIndex = 0;


	for (int i = 0; i <= 10; i++) {
		if (a[i] % 2 == 0) {
			even[evenIndex] = a[i];
			evenIndex++;
		}
		else {
			odd[oddIndex] = a[i];
			oddIndex++;
		}
	}
	printf("odd배열:");

	for (int i = 0; i < 5; i++) {
		printf(" %d ", odd[i]);
	}
	
	printf("\n");
	printf("even배열:");
	
	for (int i = 0; i < 5; i++) {
		printf(" %d ", even[i]);
	}
	return 0;
}
