#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

void test09()
{
	vector<int>v;
	v.push_back(3);
	v.push_back(8);
	v.push_back(9);
	v.push_back(7);
	v.push_back(3);
	v.push_back(3);

	vector<int>::iterator it = adjacent_find(v.begin(), v.end());
	if (it == v.end())
	{
		cout << "�����" << endl;
	}
	else
	{
		cout << "���F " << *it << endl;
	}


}


int main9() {

	test09();

	system("pause");

	return 0;
}