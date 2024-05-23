#include<stdio.h>
int main(void) {
	int ary[3];

	*(ary + 0) = 10;
	*(ary + 1) = *(ary + 0) + 10;

	printf("세 번쨰 배열 요소에 키보드 입력 : ");
	scanf_s("%d", (ary + 2));	//배열의 세번째 방을 가르킴.

	for (int i = 0; i < 3; i++) {
		printf("%5d", *(ary + i));
	}	//for

	return 0;
}	//main