#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>




void test10()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	bool ret = binary_search(v.begin(), v.end(), 9);

	if (ret)
	{
		cout << "�����" << endl;
	}
	else
	{
		cout << "�w���" << endl;
	}

}

int main10() {

	system("pause");

	return 0;
}