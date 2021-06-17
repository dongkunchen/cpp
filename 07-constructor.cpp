#include <iostream>
using namespace std;

class Person01
{
public:

	Person01() 
	{
		cout << "ºc³y¨ç¼Æ" << endl;
	}

	~Person01()
	{
		cout << "ªRÁÊ¨ç¼Æ" << endl;
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