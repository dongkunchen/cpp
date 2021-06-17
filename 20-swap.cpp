#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

void myPrint20(int val)
{
	cout << val << " ";
}

void test20()
{
	vector<int>v1;
	vector<int>v2;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 100);
	}

	cout << "Before the exchange: " << endl;
	for_each(v1.begin(), v1.end(), myPrint20);
	cout << endl;
	for_each(v2.begin(), v2.end(), myPrint20);
	cout << endl;

	cout << "After the exchange: " << endl;
	swap(v1, v2);
	for_each(v1.begin(), v1.end(), myPrint20);
	cout << endl;
	for_each(v2.begin(), v2.end(), myPrint20);
	cout << endl;


}


int main20() {

	test20();

	system("pause");

	return 0;
}
