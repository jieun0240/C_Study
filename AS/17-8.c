#include <stdio.h>

struct address {
	char name[20];
	int age;
	char tel[20];
	char addr[80];
};

//�Ԥ�����
void print_list(struct address* lp);

int main() {
	struct address list[5] = {
		{"ȫ�浿", 23, "111-1111", "�︪�� ����"},
		{"ȫ��2", 21, "111-1112", "�︪�� ����1"},
		{"ȫ��3", 22, "111-1113", "�︪�� ����2"},
		{"ȫ��4", 24, "111-1114", "�︪�� ����3"},
		{"ȫ��5", 25, "111-1115", "�︪�� ����4"}
	};

	print_list(list);

	return 0;
}

void print_list(struct address* lp) {
	for (int i = 0; i < 5; i++) {
		printf("%10s%5d%15s%20s\n",
			(lp+i)-> name, (lp + i)-> age, (lp + i)-> tel, (lp + i)-> addr);
	}
}