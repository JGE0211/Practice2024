#include <iostream>
#include <map>
using namespace std;

int main()
{
	map<string, string> f;
	
	f["강병익"] = "010-1111-2222";
	f["조용석"] = "010-3333-4444";
	f["김병수"] = "010-5555-6666";

	for (auto i : f)
		cout << i.first << " : " << i.second << endl;

	
}
