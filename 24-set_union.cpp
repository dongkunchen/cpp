#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

void myPrint24(int val)
{
	cout << val << " ";
}

void test24()
{
	vector<int>v1;
	vector<int>v2;

	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 5);
	}

	vector<int>vTarget;
	vTarget.resize(v1.size()+v2.size());

	vector<int>::iterator itEnd = set_union(v1.begin(), v1.end(), v2.begin(), v2.end(),vTarget.begin());
	
	for_each(vTarget.begin(), itEnd, myPrint24);
	cout << endl;
}


int main24() {

	test24();

	system("pause");

	return 0;
}