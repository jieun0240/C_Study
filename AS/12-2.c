#include <stdio.h>
int main() {

	char* dessert = "apple";

	printf("���� �Ľ��� %s �Դϴ�.\n", dessert);
	//dessert�� ������ �ִ� �ּҰ����� ����ϴµ� '\0' �� ������ ���
	dessert = "banana";
	// dessert�� "banana" ���ڿ��� ���� �ּҰ��� ����ȴ�. 
	printf("���� �Ľ��� %s �Դϴ�.\n", dessert);
	return 0;
}