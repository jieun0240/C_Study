#include <stdio.h>

struct address {
	char name[20];
	int age;
	char tel[20];
	char addr[80];
};

int main() {
	struct address list[5] = {
		{"ȫ�浿", 23, "111-1111", "�︪�� ����"},
		{"ȫ��2", 23, "111-1112", "�︪�� ����1"},
		{"ȫ��3", 23, "111-1113", "�︪�� ����2"},
		{"ȫ��4", 23, "111-1114", "�︪�� ����3"},
		{"ȫ��5", 23, "111-1115", "�︪�� ����4"}
	};

	for (int i = 0; i < 5; i++) {
		printf("%10s%5d%15s%20s",
			list[i].name, list[i].age, list[i].tel, list[i].addr);
	}

	return 0;
}