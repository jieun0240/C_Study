#include <stdio.h>

struct student{	// ����
	int num;
	double grade;
};
int main() {
	struct student s1;	// ����
	
	s1.num = 2303;	// ����
	s1.grade = 2.7;
	printf("�й� : %d\n���� : %.1lf\n", s1.num, s1.grade);	// ���

	return 0;
}