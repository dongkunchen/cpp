#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

void myPrint25(int val)
{
	cout << val << " ";
}

void test25()
{
	vector<int>v1;
	vector<int>v2;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 5);
	}

	vector<int>vTarget;
	vTarget.resize(max(v1.size(),v2.size()));
	
	cout << "v1 and v2 Subtraction: " << endl;
	vector<int>::iterator itEnd1 = set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
	for_each(vTarget.begin(), itEnd1, myPrint25);
	cout << endl;

	cout << "v2 and v1 Subtraction: " << endl;
	vector<int>::iterator itEnd2 = set_difference(v2.begin(), v2.end(), v1.begin(), v1.end(), vTarget.begin());
	for_each(vTarget.begin(), itEnd2, myPrint25);
	cout << endl;

}

int main() {

	test25();

	system("pause");

	return 0;
}
