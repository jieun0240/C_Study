#include <stdio.h>

struct address {
	char name[20];
	int age;
	char tel[20];
	char addr[80];
};

//ÇÔ¤µ¼±¾ð
void print_list(struct address* lp);

int main() {
	struct address list[5] = {
		{"È«±æµ¿", 23, "111-1111", "¿ï¸ªµµ µ¶µµ"},
		{"È«±æ2", 21, "111-1112", "¿ï¸ªµµ µ¶µµ1"},
		{"È«±æ3", 22, "111-1113", "¿ï¸ªµµ µ¶µµ2"},
		{"È«±æ4", 24, "111-1114", "¿ï¸ªµµ µ¶µµ3"},
		{"È«±æ5", 25, "111-1115", "¿ï¸ªµµ µ¶µµ4"}
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