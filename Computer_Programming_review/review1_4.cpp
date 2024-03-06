#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int result = 1;
	int i = 0;
	int n;

	scanf("%d", &n);

	while (i < n) {
		result *= 5;
		i += 1;
	}

	printf("5¸¦ n¹ø °öÇÔ: %d", result);

	return result;
}
