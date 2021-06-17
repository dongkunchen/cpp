#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

void MyPrint(int v)
{
	cout << v << " ";
}

class MyPrint02
{
public:
	void operator()(int v)
	{
		cout << v << " ";
	}
	
};

void test05()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	for_each(v.begin(), v.end(), MyPrint);
	cout << endl;

	for_each(v.begin(), v.end(), MyPrint02());
	cout << endl;

}



int main5() {

	test05();

	system("pause");

	return 0;
}