#include<stdio.h>

void print_ary(int* pa);	// 함수선언

int main(void) {
	int ary[5] = { 10, 20, 30, 40, 50 };

	print_ary(ary);

	return 0;
}

void print_ary(int* pa) {	// 함수정의
	int i;
	for (i = 0; i < 5; i++) {
		printf("%5d", pa[i]);	// 배열의 주소를 가리키는 포인터 변수는
		// 배열 이름으로 사용될 수 있다.
	}
}