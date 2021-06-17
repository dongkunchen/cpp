#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

void myPrint17(int val)
{
	cout << val << " ";
}

void test17()
{
	vector<int>v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}

	vector<int>v2;
	v2.resize(v1.size());
	copy(v1.begin(), v1.end(), v2.begin());
	for_each(v2.begin(), v2.end(), myPrint17);
	cout << endl;

}

int main17() {

	test17();

	system("pause");

	return 0;
}