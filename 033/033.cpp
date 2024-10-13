#include <stdio.h>
#include <string.h>

int main()
{
	//하나의 문자열로 연걸 strcat()

	char year[10];
	char id[10];
	char name[10];
	char s[30] = "";

	printf("학년:");
	scanf_s("%s", year, sizeof(year));
	printf("학번:");
	scanf_s("%s", id, sizeof(id));
	printf("이름:");
	scanf_s("%s", name, sizeof(name));

	strcat_s(s, year);
	strcat_s(s, "학년 ");
	strcat_s(s, id);
	strcat_s(s, " ");
	strcat_s(s, name);
	printf("%s\n", s);


}