#include<stdio.h>

int main(void) {
	int ary[5] = { 10, 20, 30, 40, 50 };
	int* pa = ary;

	int* pb = pa + 3;	// 3*4byte 주소값이 12 차이

	printf("pa : %u\n", pa);
	printf("pa : %u\n", pb);
	pa++;	//pa가 1증가 --> pa = pa + 1 --> ary + 1
	printf("pb - pa : %u\n", pb - pa);	// 값이 2 : 컴파일러는 값의 차 / 가리키는 자료형의 크기 한 값을 출력

	printf("앞에 있는 배열 요소의 값 출력 : ");
	if (pa < pb) printf("%d\n", *pa);
	else printf("%5d\n", *pb);

	return 0;
}