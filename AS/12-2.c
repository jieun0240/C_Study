#include <stdio.h>
int main() {

	char* dessert = "apple";

	printf("오늘 후식은 %s 입니다.\n", dessert);
	//dessert가 가지고 있는 주소값에서 출력하는데 '\0' 값 전끼지 출력
	dessert = "banana";
	// dessert에 "banana" 문자열의 시작 주소값이 저장된다. 
	printf("내일 후식은 %s 입니다.\n", dessert);
	return 0;
}