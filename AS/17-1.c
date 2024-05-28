#include <stdio.h>

struct student{	// 선언
	int num;
	double grade;
};
int main() {
	struct student s1;	// 생성
	
	s1.num = 2303;	// 저장
	s1.grade = 2.7;
	printf("학번 : %d\n학점 : %.1lf\n", s1.num, s1.grade);	// 출력

	return 0;
}