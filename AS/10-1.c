#include<stdio.h>
int main(void) {
	int ary[3];

	*(ary + 0) = 10;
	*(ary + 1) = *(ary + 0) + 10;

	printf("�� ���� �迭 ��ҿ� Ű���� �Է� : ");
	scanf_s("%d", (ary + 2));	//�迭�� ����° ���� ����Ŵ.

	for (int i = 0; i < 3; i++) {
		printf("%5d", *(ary + i));
	}	//for

	return 0;
}	//main