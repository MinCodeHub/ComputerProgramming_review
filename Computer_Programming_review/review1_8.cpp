#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int isPrime(int n) {
	int i;
	int flag = 0;

	for (i = 2; i < n; i++) {
		if (n % i == 0) {
			return 0;
		}
		else if (i == n - 1) {
			return 1;
		}
	}
	return 0;
}
int main(void) {
	int i = 0;
	int n, score;

	scanf("%d", &n);

	if (isPrime(n) == 1) {
		printf("소수이다.");
	}
	else {
		printf("소수가 아니다.");
	}

	return 0;
}
