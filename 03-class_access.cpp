#include <iostream>
using namespace std;


class Person
{
public:
	string m_Name;

protected:
	string m_Car;

private:
	int m_Password;

public:
	void func()
	{
		m_Name = "張三";
		m_Car = "特斯拉";
		m_Password = 123456;
	}
	//類內都可以訪問
};

int main3() {

	Person p1;
	p1.m_Name = "李四";//類外只能訪問name

	system("pause");

	return 0;
}