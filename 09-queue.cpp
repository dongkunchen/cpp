#include <iostream>
using namespace std;
#include <queue>
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

void test09()
{
	queue<Person>q;

	Person p1("��", 30);
	Person p2("�]����", 1000);
	Person p3("�ޤK��", 900);
	Person p4("�F��", 800);

	q.push(p1);
	q.push(p2);
	q.push(p3);
	q.push(p4);

	cout << "���C���j�p��: " << q.size() << endl;

	while (!q.empty())
	{
		cout << "���Y����---�m�W: " << q.front().m_Name << "�~��: " << q.front().m_Age << endl;

		cout << "��������---�m�W: " << q.back().m_Name << "�~��: " << q.back().m_Age << endl;

		q.pop();
	}

	cout << "���C���j�p��: " << q.size() << endl;


}

int main9() {

	test09();

	system("pause");

	return 0;
}