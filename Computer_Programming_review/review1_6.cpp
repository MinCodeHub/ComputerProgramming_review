#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int max = 0;
	int i = 0;
	int n, score;

	scanf("%d", &n);

	while (i < n) {
		scanf("%d", &score);
		if (max < score) {
			max = score;
		}
		i++;
	}

	printf("�ִ밪 %d", max);

	return max;
}
