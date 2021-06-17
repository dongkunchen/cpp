#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

class MyPrint19
{
public:
	void operator()(int val)
	{
		cout << val << endl;
	}
};

class Greater19
{
public:
	bool operator()(int val)
	{
		return val > 30;
	}
};

void test19()
{
	vector<int>v;
	v.push_back(10);
	v.push_back(40);
	v.push_back(20);
	v.push_back(40);
	v.push_back(30);
	v.push_back(50);
	v.push_back(20);
	v.push_back(30);

	cout << "Before replacement: " << endl;
	for_each(v.begin(), v.end(), MyPrint19());
	cout << endl;

	replace_if(v.begin(), v.end(), Greater19(),3000);
	cout << "After replacement: " << endl;
	for_each(v.begin(), v.end(), MyPrint19());
	cout << endl;
}

int main() {

	test19();

	system("pause");

	return 0;
}
