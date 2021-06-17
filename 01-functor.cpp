#include <iostream>
using namespace std;

class MyAdd
{
public:
	int operator()(int v1, int v2) 
	{
		return v1 + v2;
	}
};

void test01()
{
	MyAdd myAdd;
	cout << myAdd(10, 10) << endl;
}

int main1() {

	test01();

	system("pause");

	return 0;
}