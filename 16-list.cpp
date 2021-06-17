#include <iostream>
using namespace std;
#include <list>
#include <string>

class Person16
{
public:
	Person16(string name, int age, int height)
	{
		this->m_Name = name;
		this->m_Age = age;
		this->m_Height = height;
	}

	string m_Name;
	int m_Age;
	int m_Height;
};

//指定排序規則
bool comparePerson(Person16& p1, Person16& p2)
{
	if (p1.m_Age == p2.m_Age)
	{
		//年齡相同按照身高
		return p1.m_Height > p2.m_Height;
	}
	else
	{
		//按照年齡
		return p1.m_Age < p2.m_Age;
	}
	
}

void test16()
{
	list<Person16>L;

	Person16 p1("劉備", 35, 175);
	Person16 p2("曹操", 45, 180);
	Person16 p3("孫權", 40, 170);
	Person16 p4("趙雲", 25, 190);
	Person16 p5("張飛", 35, 160);
	Person16 p6("關羽", 35, 200);

	L.push_back(p1);
	L.push_back(p2);
	L.push_back(p3);
	L.push_back(p4);
	L.push_back(p5);
	L.push_back(p6);

	for (list<Person16>::iterator it = L.begin(); it != L.end(); it++)
	{
		cout << "姓名: " << (*it).m_Name << " ,年齡: " << (*it).m_Age << " ,身高: " << (*it).m_Height << endl;
	}

	cout << "排序後" << endl;
	//排序指定排序規則
	L.sort(comparePerson);
	for (list<Person16>::iterator it = L.begin(); it != L.end(); it++)
	{
		cout << "姓名: " << (*it).m_Name << " ,年齡: " << (*it).m_Age << " ,身高: " << (*it).m_Height << endl;
	}


}


int main() {

	test16();

	system("pause");

	return 0;
}