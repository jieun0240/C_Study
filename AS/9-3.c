#include <stdio.h>

int main(void) {
	int a = 10, b = 15, total;
	double avg;
	int *pa, *pb;	//pa는 주소, *pa는 주소의 값
	int *pt = &total;
	double *pg = &avg;	//*이 안 붙은 포인트 변수는 주소값을 가지고 있음. *을 붙이면 주소의 값을 가짐.

	pa = &a;	//&a = a의 주소 이 값을 pa로 넘겨줌
	pb = &b;

	*pt = *pa + *pb;
	*pg = *pt / 2.0;

	printf("두 정수의 값 : %d, %d \n", *pa, *pb);
	printf("두 정수의 합 : %d \n", *pt);
	printf("두 정수의 평균 : %.1lf \n", *pg);

	return 0;
}