#include <iostream>
using namespace std;
//��k1
//#include "person.cpp"
//��k2
#include "person.hpp"

/*
#include <string>

template<class T1,class T2>
class Person
{
public:

	Person(T1 name, T2 age);

	void showPerson();

	T1 m_Name;
	T2 m_Age;
};*/

//template<class T1, class T2>
//Person<T1, T2>::Person(T1 name, T2 age)
//{
//	this->m_Name = name;
//	this->m_Age = age;
//}
//
//template<class T1, class T2>
//void Person<T1, T2>::showPerson()
//{
//	cout << "�m�W: " << this->m_Name << " ,�~��:" << this->m_Age << endl;
//}

void test08()
{
	Person<string, int> p("jerry", 20);
	p.showPerson();
}

int main8() {

	test08();

	system("pause");

	return 0;
}