#include<stdio.h>

void input_ary(double* pa, int size);
double find_max(double* pa, int size);

main(void) {
	double ary[5];
	double max;
	int size = sizeof(ary) / sizeof(ary[0]);	//5
	input_ary(ary, size);
	max = find_max(ary, size);
	printf("�迭�� �ִ밪 : %.1f\n", max);

	return 0;
}

void input_ary(double* pa, int size) {
	int i;
	printf("%d���� �Ǽ��� �Է� : ", size);
	for (i = 0; i < size; i++) {
		scanf_s("%lf", pa + i);
	}
}

double find_max(double* pa, int size) {
	double max, min;
	int i;

	max = min = pa[0];
	for (i = 0; i < size; i++) {
		if (pa[i] > max) max = pa[i];
		if (pa[i] < min) min = pa[i];
	}

	return max;
}