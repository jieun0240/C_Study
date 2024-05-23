#include <stdio.h>

int main(void) {
	int res;
	char ch;

	while (1) {
		res = scanf("%c", &ch);
		if (res == -1) break;
		// ctrl+z키를 누르면 -1이 입력됨.
		printf("%c", ch);
	}

	return 0;
}