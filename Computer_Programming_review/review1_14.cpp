#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void) {

	int a = 5;
	int b = 10;
	int temp;
	printf("�ٲٱ� ��");
	printf("\n");
	printf("a : %d", a);
	printf("\n");
	printf("b : %d ", b);
	printf("\n");
	temp = a;
	a = b;
	b = temp;
	printf("�ٲ� ��");
	printf("\n");
	printf("a : %d", a);
	printf("\n");
	printf("b : %d ", b);

	return 0;
}
