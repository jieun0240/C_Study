#include <stdio.h>

struct address {
	char name[20];
	int age;
	char tel[20];
	char addr[80];
};

int main() {
	struct address list[5] = {
		{"È«±æµ¿", 23, "111-1111", "¿ï¸ªµµ µ¶µµ"},
		{"È«±æ2", 23, "111-1112", "¿ï¸ªµµ µ¶µµ1"},
		{"È«±æ3", 23, "111-1113", "¿ï¸ªµµ µ¶µµ2"},
		{"È«±æ4", 23, "111-1114", "¿ï¸ªµµ µ¶µµ3"},
		{"È«±æ5", 23, "111-1115", "¿ï¸ªµµ µ¶µµ4"}
	};

	for (int i = 0; i < 5; i++) {
		printf("%10s%5d%15s%20s",
			list[i].name, list[i].age, list[i].tel, list[i].addr);
	}

	return 0;
}