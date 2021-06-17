#include <iostream>
using namespace std;
#include <vector>

class GreaterFive
{
public:
	bool operator()(int val)
	{
		return val > 5;
	}
};

void test02()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	vector<int>::iterator it = find_if(v.begin(), v.end(), GreaterFive());
	if (it == v.end())
	{
		cout << "¥¼§ä¨ì" << endl;
	}
	else
	{
		cout << "§ä¨ì" << *it << endl;
	}
}


int main2() {

	test02();

	system("pause");

	return 0;
}