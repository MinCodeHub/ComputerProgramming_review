#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int list[] = { 5,3,8,1,2,7 };


	
	int temp;
	int len = (sizeof(list) / sizeof(int));
	int idx; //�ּҰ��� ��ġ �ε���
	for (int j = 0; j < len; j++) {
		int min = list[j];
		idx = j;
		for (int i = j; i < len; i++) {
			//�ּҰ� ã��
			if (min > list[i]) {
				min = list[i];
				idx = i;
			}
		}
		temp = list[j];
		list[j] = min;
		list[idx] = temp;
	}

	for (int i = 0; i < len; i++) {
		printf("%d", list[i]);
	}

	return 0;
}
