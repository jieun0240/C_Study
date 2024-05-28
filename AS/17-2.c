#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct profile {	// 선언
	char name[20];
	int agee;
	double height;
	char* intro;
};
int main() {
	struct profile yuni;	// 생성
	strcpy(yuni.name, "서하윤");	// name배열에 "서하윤"를 복사
	yuni.agee = 17;
	yuni.height = 164.5;

	yuni.intro = (char*)malloc(80);	// heap 영역에 80바이트 메모리 공간 확보
	printf("자기소개 : ");
	gets(yuni.intro);	// 키보드로부터 문자열 입력

	printf("이름 : %s\n나이 : %d\n키 : %.1lf\n자기소개 : %s\n", yuni.name, yuni.agee, yuni.height, yuni.intro);
}