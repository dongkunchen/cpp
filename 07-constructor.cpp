#include <iostream>
using namespace std;

class Person01
{
public:

	Person01() 
	{
		cout << "�c�y���" << endl;
	}

	~Person01()
	{
		cout << "�R�ʨ��" << endl;
	}
};

void test01()
{
	Person01 p;
}

int main7(){

	test01();

	system("pause");

	return 0;
}