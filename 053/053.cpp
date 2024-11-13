#include <stdio.h>

struct student {
	char dept[20];
	int year;
	int id;
	char name[20];
	char phone[20];
};

int main() {
	student s; // = { "의료IT공학과", 1, 24615045, "전경은", "010 5069 8220" };

	printf("학과:");
	scanf_s("%s", s.dept, 20);  // 배열은 이름자체가 주소기에 & 표시 안 해도 됨 /// 문자열의 크기는 제일 뒤로!

	printf("학년:");
	scanf_s("%d", &s.year);

	printf("학번:");
	scanf_s("%d", &s.id);

	printf("이름:");
	scanf_s("%s", s.name, 20);

	printf("전화번호:");
	scanf_s("%s", s.phone, 20);

	printf("학과 : %s\n", s.dept);
	printf("학년 : %d학년\n", s.year);
	printf("학번 : %d\n", s.id);
	printf("이름 : %s\n", s.name);
	printf("전화번호 : %s\n", s.phone);

}