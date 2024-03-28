#include<stdio.h>
main() {
	char ch1[21] = "";
	int i;
	scanf("%s", ch1);
	for(i = 0; ch1[i] != '\0'; i++){
		printf("\'%c\'\n", ch1[i]);
	}
}
