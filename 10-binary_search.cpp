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
		cout << "未找到" << endl;
	}
	else
	{
		cout << "已找到" << endl;
	}

}

int main10() {

	system("pause");

	return 0;
}