#include <stdio.h>

int main(void) {
	int res;
	char ch;

	while (1) {
		res = scanf("%c", &ch);
		if (res == -1) break;
		// ctrl+zŰ�� ������ -1�� �Էµ�.
		printf("%c", ch);
	}

	return 0;
}