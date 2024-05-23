#include<stdio.h>
void swap(int pa, int pb);

int main(void) {
	int a = 10, b = 20;

	swap(a, b);
	printf("a:%d, b:%d\n", a, b);

	return 0;
}

void swap(int pa, int pb) {	// int  *pa = &a, int *pb = &b

	int temp;

	temp = pa;
	pa = pb;
	pb = temp;
}