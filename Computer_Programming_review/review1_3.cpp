#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int result = 0;
	int i = 1;
	int n;

	scanf("%d", &n);

	while (i <= n) {
		result += 3;
		i += 1;
	}

	printf("3�� n�� ����: %d", result);

	return result;
}
