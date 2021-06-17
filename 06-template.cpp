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
		cout << "姓名: " << this->m_Name << " ,年齡: " << this->m_Age << endl;
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
	Person<string, int>p("孫悟空", 18);
	printPerson1(p);
}

//一般沒有配合函數模板
template<class T1,class T2>
void printPerson2(Person<T1,T2>& p)
{
	p.showPerson();
	cout << "T1類型: " << typeid(T1).name() << endl;
	cout << "T2類型: " << typeid(T2).name() << endl;
}

void test066()
{
	Person<string, int>p("豬八戒", 19);
	printPerson2(p);
}

int main6() {

	test06();
	test066();

	system("pause");

	return 0;
}