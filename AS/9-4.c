#include<stdio.h>

int main() {
	int a = 10, b = 20;
	const int *pa = &a;		//pa�� a�� �ּҰ��� ����
	
	printf("���� a �� : %d\n", *pa);	//�����͸� ���� �����Ͽ� a ���
	pa = &b;	//b�� �ּҰ����� �ٲ�
	printf("���� b �� : %d\n", *pa);	//�����͸� ���� �����Ͽ� b ���
	pa = &a;
	a = 20;
	printf("���� a �� : %d\n", *pa);	//�����͸� ���� �����Ͽ� a ���
	//*pa = 30; //const(���, �������Ѷ�) ������ *pa�δ� ���� ����Ұ�
	return 0;
}