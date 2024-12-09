//STL: Standard Template Library
#include <iostream>
#include <vector>
//#include <string>  /// 스트링 쓰는 지 확인
#include <algorithm>
using namespace std;

int main()
{
	vector<string> v;  //template 라이브러리
	string s;

	cout << "문자열 10개 입력 :";
	for (int i = 0; i < 10; i++) {
		cin >> s;
		v.push_back(s);
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < 10; i++) {
		cout << v[i] << " ";
	}
	cout << endl;
}