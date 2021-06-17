#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

//void myPrint18(int val)
//{
//	cout << val << " ";
//}
class MyPrint18
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
};

void test18()
{
	vector<int>v;
	v.push_back(20);
	v.push_back(30);
	v.push_back(50);
	v.push_back(30);
	v.push_back(40);
	v.push_back(20);
	v.push_back(10);
	v.push_back(20);

	cout << "Before replacement" << endl;
	for_each(v.begin(), v.end(), MyPrint18());
	cout << endl;

	cout << "After replacement" << endl;
	replace(v.begin(), v.end(), 20, 2000);
	for_each(v.begin(), v.end(), MyPrint18());
	cout << endl;

}

int main18() {

	test18();

	system("pause");

	return 0;
}
