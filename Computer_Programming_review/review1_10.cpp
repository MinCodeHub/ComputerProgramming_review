#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int equalArray(int a[], int aSize, int b[], int bSize) {
	int same = 1;
	if (aSize != bSize) {
		same = 0;
		return same;
	}
	else {
		for (int i = 0; i < aSize; i++) {
			if (a[i] != b[i]) {
				same = 0;
				return 0;
			}
			else if (i == aSize - 1) {
				return same;
			}
		}
	}

}

int main(void) {
	int a[5] = { 10,20,30,40,50 };
	int b[5] = {10,30,20,50,40};
	printf("두 배열이 ");
	if (equalArray(a, 5, b, 5) == 0) {
		printf("다르다.");
	}
	else {
		printf("같다.");
	}

	return 0;
}
