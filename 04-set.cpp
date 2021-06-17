#include <iostream>
using namespace std;
#include <set>
#include <string>

class Person
{
public:
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	string m_Name;
	int m_Age;
};

class comparePerson
{
public:
	bool operator()(const Person& p1, const Person& p2)const//2019��n�[const
	{
		return p1.m_Age > p2.m_Age;
	}
};

void test04()
{
	//�۩w�q�������n���w�ƧǳW�h
	set<Person,comparePerson>s1;

	Person p1("�B��",24);
	Person p2("����",28);
	Person p3("�i��",25);
	Person p4("�i��",21);

	s1.insert(p1);
	s1.insert(p2);
	s1.insert(p3);
	s1.insert(p4);

	for (set<Person,comparePerson>::iterator it = s1.begin(); it != s1.end(); it++)
	{
		cout << "�m�W: " << it->m_Name << " ,�~��: " << it->m_Age << endl;
	}

}

int main4() {

	test04();
	
	system("pause");

	return 0;
}