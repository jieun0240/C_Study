#include<stdio.h>
int main(void) {

	printf("apple�� ����� ���� �ּ� �� : %p\n", "apple");
	// %p�� "apple"�� �ּҰ��� ���
	printf("�� ��° ������ ���� �ּ� �� : %p\n", "apple" + 1);
	// apple�ּҰ��� 1�� ����
	printf("�� ��° ������ ���� �ּ� �� : %c\n", *"apple");
	// �ּҰ��� �ִ� ��
	printf("�� ��° ������ ���� �ּ� �� : %c\n", *("apple" + 1));
	// ���ڿ� apple[0] + 1
	printf("�� ��° ������ ���� �ּ� �� : %c\n", "apple"[4]);
	// ���ڿ� apple[4]�� ��
	return 0;
}