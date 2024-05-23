#include<stdio.h>

int main() {
	char ch;
	int in;
	double db;

	char* pc = &ch;	//pc가 ch의 값을 가르킴
	int* pi = &in;	//위 내용과 유사함.
	double* pd = &db;

	return 0;
}