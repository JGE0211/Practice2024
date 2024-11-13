#include <stdio.h>

struct student {
	char dept[20];
	int year;
	int id;
	char name[20];
	char phone[20];
};

void printInfo(student s) {
	printf("학과 : %s\n", s.dept);
	printf("학년 : %d학년\n", s.year);
	printf("학번 : %d\n", s.id);
	printf("이름 : %s\n", s.name);
	printf("전화번호 : %s\n", s.phone);
}

int main() {
	student s[3];

	for (int i = 0; i < 3; i++) {
		printf("학과:");
		scanf_s("%s", s[i].dept, 20);

		printf("학년:");
		scanf_s("%d", &s[i].year);

		printf("학번:");
		scanf_s("%d", &s[i].id);

		printf("이름:");
		scanf_s("%s", s[i].name, 20);

		printf("전화번호:");
		scanf_s("%s", s[i].phone, 20);

		printf("\n");
	}

	for (int i = 0; i < 3; i++) {
		printInfo(s[i]);
		printf("\n");
	}
}