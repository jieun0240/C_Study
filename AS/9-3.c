#include <stdio.h>

int main(void) {
	int a = 10, b = 15, total;
	double avg;
	int *pa, *pb;	//pa�� �ּ�, *pa�� �ּ��� ��
	int *pt = &total;
	double *pg = &avg;	//*�� �� ���� ����Ʈ ������ �ּҰ��� ������ ����. *�� ���̸� �ּ��� ���� ����.

	pa = &a;	//&a = a�� �ּ� �� ���� pa�� �Ѱ���
	pb = &b;

	*pt = *pa + *pb;
	*pg = *pt / 2.0;

	printf("�� ������ �� : %d, %d \n", *pa, *pb);
	printf("�� ������ �� : %d \n", *pt);
	printf("�� ������ ��� : %.1lf \n", *pg);

	return 0;
}