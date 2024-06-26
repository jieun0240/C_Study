#include<stdio.h>

void print_ary(int* pa);	// 함수선언

int main(void) {
	int ary1[5] = { 10, 20, 30, 40, 50 };
	int ary2[7] = { 10, 20, 30, 40, 50, 60, 70 };
	
	printf("ary1[5]의 크기는 %d\n", sizeof(ary1));
	printf("ary2[7]의 크기는 %d\n", sizeof(ary2));

	print_ary(ary1, 5);	//함수호출, ary1은 배열이름 상수로 인식
	printf("\n");
	print_ary(ary2, 7);

	return 0;
}

void print_ary(int* pa) {	// 함수정의
	int i;
	for (i = 0; i < sizeof(pa)/4; i++) {
		printf("%5d", pa[i]);	// 배열의 주소를 가리키는 포인터 변수는
		// 배열 이름으로 사용될 수 있다.
	}
}