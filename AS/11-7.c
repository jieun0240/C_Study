#include <stdio.h>

int main(void) {
	int num, grade;

	printf("�й� �Է� : ");
	scanf_s("%d", &num);
	getchar();
	printf("���� �Է� : ");
	grade = getchar();
	printf("�й� : %d, �й� : %c", num, grade);

	return 0;
}