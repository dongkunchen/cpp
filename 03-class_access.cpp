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
		m_Name = "�i�T";
		m_Car = "�S����";
		m_Password = 123456;
	}
	//�������i�H�X��
};

int main3() {

	Person p1;
	p1.m_Name = "���|";//���~�u��X��name

	system("pause");

	return 0;
}