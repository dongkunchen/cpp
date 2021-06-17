#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>


class MyPrint23
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
};

void test23()
{
	vector<int>v1;
	vector<int>v2;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i+5);
	}
	vector<int>vTarget;
	vTarget.resize(min(v1.size(), v2.size()));
	
	vector<int>::iterator itEnd = set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());

	//注意要用itEnd 不要用vTarget.end();
	for_each(vTarget.begin(), itEnd, MyPrint23());
	cout << endl;

}

int main23() {

	test23();

	system("pause");

	return 0;
}