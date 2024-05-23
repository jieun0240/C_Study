#include<stdio.h>

void print_ary(int* pa);	// �Լ�����

int main(void) {
	int ary1[5] = { 10, 20, 30, 40, 50 };
	int ary2[7] = { 10, 20, 30, 40, 50, 60, 70 };
	
	printf("ary1[5]�� ũ��� %d\n", sizeof(ary1));
	printf("ary2[7]�� ũ��� %d\n", sizeof(ary2));

	print_ary(ary1, 5);	//�Լ�ȣ��, ary1�� �迭�̸� ����� �ν�
	printf("\n");
	print_ary(ary2, 7);

	return 0;
}

void print_ary(int* pa) {	// �Լ�����
	int i;
	for (i = 0; i < sizeof(pa)/4; i++) {
		printf("%5d", pa[i]);	// �迭�� �ּҸ� ����Ű�� ������ ������
		// �迭 �̸����� ���� �� �ִ�.
	}
}