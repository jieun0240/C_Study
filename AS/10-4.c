#include<stdio.h>

int main(void) {
	int ary[5] = { 10, 20, 30, 40, 50 };
	int* pa = ary;

	int* pb = pa + 3;	// 3*4byte �ּҰ��� 12 ����

	printf("pa : %u\n", pa);
	printf("pa : %u\n", pb);
	pa++;	//pa�� 1���� --> pa = pa + 1 --> ary + 1
	printf("pb - pa : %u\n", pb - pa);	// ���� 2 : �����Ϸ��� ���� �� / ����Ű�� �ڷ����� ũ�� �� ���� ���

	printf("�տ� �ִ� �迭 ����� �� ��� : ");
	if (pa < pb) printf("%d\n", *pa);
	else printf("%5d\n", *pb);

	return 0;
}