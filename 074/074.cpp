#include <iostream>
#include <string.h>
using namespace std;

class Member {
private:
	char* name;
	int age;
public:
	Member(const char* name, int age);
	~Member();
	Member(const Member& rhs);
	void changeName(const char* name);
	void Print();
};
int main()
{
	Member m1("sorong", 20); //생성자 실행
	Member m2("bongsu", 19); //생성자 실행
	Member m3(m1);			// 복사생성자 실행
	m1.Print();
	m2.Print();
	m3.Print();
	m2.changeName("yongkil");
	m2.Print();

}

Member::Member(const char* name, int age) {
	this->age = age;
	//깊은 복사
	this->name = new char[strlen(name) + 1]; // 메모리를 할당해서
	strcpy_s(this->name, strlen(name) + 1, name);  // 그곳에다가 복사한다
}
Member::~Member() {
	delete[] this->name;
}
Member::Member(const Member& rhs) {
	age = rhs.age;
	//깊은 복사
	name = new char[strlen(rhs.name) + 1];
	strcpy_s(name, strlen(rhs.name) + 1, rhs.name);
}
//깊은 복사가 필요한데, 그 전에 할당되어 있던 이름을 delete 해주어야 함
void Member::changeName(const char* name) {
	delete[] this->name; //***************
	this->name = new char[strlen(name) + 1];
	strcpy_s(this->name, strlen(name) + 1, name);
}
void Member::Print() {
	cout << "Name : " << name << endl << "Age : " << age << endl;
}