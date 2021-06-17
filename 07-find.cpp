#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include <string>

void test07()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	vector<int>::iterator it = find(v.begin(), v.end(), 5);
	if (it == v.end()) 
	{
		cout << "�S���" << endl;
	}
	else
	{
		cout << "���F " << *it << endl;
	}
}

class PersonFind
{
public:
	PersonFind(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	//���� == 
	bool operator==(const PersonFind&p)
	{
		if (this->m_Name == p.m_Name && this->m_Age == p.m_Age)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	string m_Name;
	int m_Age;
};

void test077()
{
	vector<PersonFind>v;
	PersonFind p1("aaa", 10);
	PersonFind p2("bbb", 20);
	PersonFind p3("ccc", 30);
	PersonFind p4("ddd", 40);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);

	vector<PersonFind>::iterator it = find(v.begin(), v.end(), p2);
	if (it == v.end())
	{
		cout << "�S���" << endl;
	}
	else
	{
		cout << "���F �m�W: " << it->m_Name << " ,�~��: " << it->m_Age << endl;
	}
}

int main7() {

	//test07();
	test077();

	system("pause");

	return 0;
}