#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

class Transform
{
public:
	int operator()(int v)
	{
		return v + 100;
	}
};

class Print06
{
public:
	void operator()(int v)
	{
		cout << v << " ";
	}
};

void test06()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	vector<int>vTarget;
	vTarget.resize(v.size());

	transform(v.begin(), v.end(), vTarget.begin(), Transform());

	for_each(vTarget.begin(), vTarget.end(), Print06());
	cout << endl;

}

int main6() {

	test06();

	system("pause");

	return 0;
}