#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>
#include <string>


class GreaterFind_if
{
public:
	bool operator()(int v)
	{
		return v > 5;
	}
};

void test08()
{
	vector<int>v;

	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	vector<int>::iterator it = find_if(v.begin(), v.end(), GreaterFind_if());
	if (it == v.end())
	{
		cout << "沒找到" << endl;
	}
	else
	{
		cout << "找到了  " << *it << endl;
	}
}

class Person08
{
public:
	Person08(string name,int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	string m_Name;
	int m_Age;
};

class Greater08
{
public:
	bool operator()(Person08& p)
	{
		if (p.m_Age > 20) 
		{
			return true;
		}
		else
		{
			return false;
		}
	}
};

void test088()
{
	vector<Person08>v;

	Person08 p1("劉備",20);
	Person08 p2("關羽",30);
	Person08 p3("張飛",40);
	Person08 p4("趙雲",50);
	Person08 p5("曹操",60);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	vector<Person08>::iterator it = find_if(v.begin(), v.end(), Greater08());
	if (it == v.end())
	{
		cout << "沒找到" << endl;
	}
	else
	{
		cout << "找到了: 姓名: " << it->m_Name << " 年齡: " << it->m_Age << endl;
	}

}


int main8() {

	test08();
	test088();

	system("pause");

	return 0;
}