#include<stdio.h>

void print_ary(int* pa);	// �Լ�����

int main(void) {
	int ary[5] = { 10, 20, 30, 40, 50 };

	print_ary(ary);

	return 0;
}

void print_ary(int* pa) {	// �Լ�����
	int i;
	for (i = 0; i < 5; i++) {
		printf("%5d", pa[i]);	// �迭�� �ּҸ� ����Ű�� ������ ������
		// �迭 �̸����� ���� �� �ִ�.
	}
}