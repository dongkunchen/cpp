#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

void myPrint16(int val)
{
	cout << val << " ";
}

void test16()
{
	vector<int>v;
	v.push_back(10);
	v.push_back(30);
	v.push_back(50);
	v.push_back(20);
	v.push_back(40);

	cout << "反轉前: " << endl;
	for_each(v.begin(), v.end(),myPrint16);
	cout << endl;

	cout << "反轉後: " << endl;
	reverse(v.begin(), v.end());
	for_each(v.begin(), v.end(), myPrint16);
	cout << endl;
}

int main16() {

	test16();

	system("pause");

	return 0;
}