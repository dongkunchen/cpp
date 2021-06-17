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

//���w�ƧǳW�h
bool comparePerson(Person16& p1, Person16& p2)
{
	if (p1.m_Age == p2.m_Age)
	{
		//�~�֬ۦP���Ө���
		return p1.m_Height > p2.m_Height;
	}
	else
	{
		//���Ӧ~��
		return p1.m_Age < p2.m_Age;
	}
	
}

void test16()
{
	list<Person16>L;

	Person16 p1("�B��", 35, 175);
	Person16 p2("���", 45, 180);
	Person16 p3("�]�v", 40, 170);
	Person16 p4("����", 25, 190);
	Person16 p5("�i��", 35, 160);
	Person16 p6("����", 35, 200);

	L.push_back(p1);
	L.push_back(p2);
	L.push_back(p3);
	L.push_back(p4);
	L.push_back(p5);
	L.push_back(p6);

	for (list<Person16>::iterator it = L.begin(); it != L.end(); it++)
	{
		cout << "�m�W: " << (*it).m_Name << " ,�~��: " << (*it).m_Age << " ,����: " << (*it).m_Height << endl;
	}

	cout << "�Ƨǫ�" << endl;
	//�Ƨǫ��w�ƧǳW�h
	L.sort(comparePerson);
	for (list<Person16>::iterator it = L.begin(); it != L.end(); it++)
	{
		cout << "�m�W: " << (*it).m_Name << " ,�~��: " << (*it).m_Age << " ,����: " << (*it).m_Height << endl;
	}


}


int main() {

	test16();

	system("pause");

	return 0;
}