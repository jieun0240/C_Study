#include<stdio.h>
int main(void) {

	printf("apple이 저장된 시작 주소 값 : %p\n", "apple");
	// %p는 "apple"의 주소값을 출력
	printf("두 번째 문자의 시작 주소 값 : %p\n", "apple" + 1);
	// apple주소값에 1을 더함
	printf("두 번째 문자의 시작 주소 값 : %c\n", *"apple");
	// 주소값에 있는 값
	printf("두 번째 문자의 시작 주소 값 : %c\n", *("apple" + 1));
	// 문자열 apple[0] + 1
	printf("두 번째 문자의 시작 주소 값 : %c\n", "apple"[4]);
	// 문자열 apple[4]의 값
	return 0;
}