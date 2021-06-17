#include <iostream>
using namespace std;
#include <string>

template<class T1,class T2>
class Person
{
public:

	Person(T1 name, T2 age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	void showPerson()
	{
		cout << "�m�W: " << this->m_Name << " ,�~��: " << this->m_Age << endl;
	}

	T1 m_Name;
	T2 m_Age;
};


void printPerson1(Person<string, int>& p)
{
	p.showPerson();
}


void test06()
{
	Person<string, int>p("�]����", 18);
	printPerson1(p);
}

//�@��S���t�X��ƼҪO
template<class T1,class T2>
void printPerson2(Person<T1,T2>& p)
{
	p.showPerson();
	cout << "T1����: " << typeid(T1).name() << endl;
	cout << "T2����: " << typeid(T2).name() << endl;
}

void test066()
{
	Person<string, int>p("�ޤK��", 19);
	printPerson2(p);
}

int main6() {

	test06();
	test066();

	system("pause");

	return 0;
}