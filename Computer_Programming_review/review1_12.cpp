#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int search(int a[], int sizeA, int key) {
	
	int found = 0;
	for (int i = 0; i < sizeA; i++) {
		if (a[i] == key) {
			found = i + 1;
			return found;
		}
		else if (i == sizeA - 1 && found == 0) {
			return -1;
		}
	}
}

int main(void) {

	int a[] = { 11, 22, 33, 44, 55, 66, 11, 22, 33, 44, 55, 66 };
	int SIZE = (sizeof(a) / sizeof(int));
	int key;

	printf("key값을 입력하세요:");
	scanf("%d", &key);

	printf("\n");
	int foundIdx =  search(a, SIZE, key);
	
	if (foundIdx == -1) {
		printf("없습니다.");
	}
	else {
		printf("%d번째에 있습니다.", foundIdx);
	}


	return 0;
}
