#include <iostream>
using namespace std;

int main()
{
	int a[10];

	cout << "10개의 숫자를 입력하세요 :";
	for (int i = 0; i < 10; i++)
		cin >> a[i];

	int min = INT_MAX, max = INT_MIN;  //제일 큰 거를 min에 넣어 min보다 작으면 다시 min으로 넣고 또 min보다 작으면 min 넣음, 
	//min = a[0], max = a[0]로 시작해도 됨.
	int sum = 0;
	for (int i : a) {
		if (i < min)
			min = i;

		if (i > max)
			max = i;

		sum += i;
	}

	cout << "최소값 = " << min << endl;
	cout << "최대값 = " << max << endl;
	cout << "평균값 = " << sum/10.0 << endl;
}