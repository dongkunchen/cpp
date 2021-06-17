#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>
#include <functional>

void myPrint(int val)
{
	cout << val << endl;
}


void test13()
{
	vector<int>v;
	v.push_back(10);
	v.push_back(30);
	v.push_back(20);
	v.push_back(50);
	v.push_back(40);

	sort(v.begin(), v.end());
	for_each(v.begin(), v.end(),myPrint);
	cout << endl;

	//改降序使用內建函數greater
	sort(v.begin(), v.end(), greater<int>());
	for_each(v.begin(), v.end(), myPrint);
	cout << endl;
	
}


int main13() {

	test13();

	system("pause");

	return 0;
}