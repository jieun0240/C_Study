#include<stdio.h>

void print_ary(int* pa, int size);	// �Լ�����

int main(void) {
	int ary1[5] = { 10, 20, 30, 40, 50 };
	int ary2[7] = { 10, 20, 30, 40, 50, 60, 70 };

	print_ary(ary1, 5);	//�Լ�ȣ��, ary1�� �迭�̸� ����� �ν�
	printf("\n");
	print_ary(ary2, 7);

	return 0;
}

void print_ary(int* pa, int size) {	// �Լ�����
	int i;
	for (i = 0; i < size; i++) {
		printf("%5d", pa[i]);	// �迭�� �ּҸ� ����Ű�� ������ ������
		// �迭 �̸����� ���� �� �ִ�.
	}
}