#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct profile {	// ����
	char name[20];
	int agee;
	double height;
	char* intro;
};
int main() {
	struct profile yuni;	// ����
	strcpy(yuni.name, "������");	// name�迭�� "������"�� ����
	yuni.agee = 17;
	yuni.height = 164.5;

	yuni.intro = (char*)malloc(80);	// heap ������ 80����Ʈ �޸� ���� Ȯ��
	printf("�ڱ�Ұ� : ");
	gets(yuni.intro);	// Ű����κ��� ���ڿ� �Է�

	printf("�̸� : %s\n���� : %d\nŰ : %.1lf\n�ڱ�Ұ� : %s\n", yuni.name, yuni.agee, yuni.height, yuni.intro);
}