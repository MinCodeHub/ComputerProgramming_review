#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int product = 1;
	int i = 1;
	int n;

	scanf("%d", &n);

	while (i <= n) {
		product *= i;
		i += 1;
	}

	printf("1���� n������ ��: %d", product);

	return product;
}
