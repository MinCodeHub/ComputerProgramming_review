#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int sum = 0;
	int i = 1;
	int n;

	scanf("%d", &n);

	while (i <= n) {
		sum += i;
		i+=1;
	}
	
	printf("1부터 n까지의 합: %d", sum);

	return sum;
}
