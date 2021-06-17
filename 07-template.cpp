#include <iostream>
using namespace std;
#include <string>

template<class T1,class T2>
class Person
{
public:
	
	Person(T1 name, T2 age);

	void showPerson();

	T1 m_Name;
	T2 m_Age;
};

//構造函數類外實現
template<class T1,class T2>
Person<T1,T2>::Person(T1 name, T2 age)
{
	this->m_Name = name;
	this->m_Age = age;
}

//成全函數類外實現
template<class T1, class T2>
void Person<T1, T2>::showPerson()
{
	cout << "姓名: " << this->m_Name << " 年齡: " << this->m_Age << endl;
}

void test07() 
{
	Person<string,int> p("tom",18);
	p.showPerson();
}

int main7() {

	test07();

	system("pause");

	return 0;
}