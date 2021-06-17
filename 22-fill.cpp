#include <iostream>
using namespace std;
#include <vector>
#include <numeric>
#include <algorithm>

class MyPrint20
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
};

void test22()
{
	vector<int>v;
	v.resize(10);

	fill(v.begin(), v.end(), 100);
	for_each(v.begin(), v.end(), MyPrint20());
	cout << endl;
}

int main22() {

	test22();

	system("pause");

	return 0;
}