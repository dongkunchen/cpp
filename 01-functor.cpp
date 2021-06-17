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

void test()
{
	MyAdd myAdd;
	cout << myAdd(10, 10) << endl;
}

int main() {

	test();

	system("pause");

	return 0;
}
