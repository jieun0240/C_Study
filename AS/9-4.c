#include<stdio.h>

int main() {
	int a = 10, b = 20;
	const int *pa = &a;		//pa가 a의 주소값을 가짐
	
	printf("변수 a 값 : %d\n", *pa);	//포인터를 간접 참조하여 a 출력
	pa = &b;	//b의 주소값으로 바뀜
	printf("변수 b 값 : %d\n", *pa);	//포인터를 간접 참조하여 b 출력
	pa = &a;
	a = 20;
	printf("변수 a 값 : %d\n", *pa);	//포인터를 간접 참조하여 a 출력
	//*pa = 30; //const(상수, 고정시켜라) 때문에 *pa로는 값을 변경불가
	return 0;
}