#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int total = 0;
	int i = 0;
	int n,score;

	scanf("%d", &n);

	while (i < n) {
		scanf("%d", &score);
		total += score;
		i += 1;
	}

	printf("ÃÑÁ¡ %d, Æò±Õ %f", total, ((double)total / n));

	return total;
}
