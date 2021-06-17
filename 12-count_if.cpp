#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include <string>

class Greater12
{
public:
	bool operator()(int v)
	{
		return v > 20;
	}
};

void test12()
{
	vector<int>v;
	v.push_back(10);
	v.push_back(40);
	v.push_back(30);
	v.push_back(20);
	v.push_back(40);
	v.push_back(20);

	int num = count_if(v.begin(), v.end(), Greater12());
	
	cout << "大於20的有 " << num << " 個" << endl;
}

class Person12
{
public:
	Person12(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	string m_Name;
	int m_Age;
};

class AgeGreater20
{
public:
	bool operator()(const Person12& p)
	{
		return p.m_Age > 20;
	}
};

void test122()
{
	vector<Person12>v;
	Person12 p1("劉備",35);
	Person12 p2("關羽",35);
	Person12 p3("張飛",35);
	Person12 p4("趙雲",20);
	Person12 p5("曹操",40);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	int num = count_if(v.begin(), v.end(), AgeGreater20());

	cout << "年齡大於20的有 " << num << " 個" << endl;
}

int main12() {

	test122();

	system("pause");

	return 0;
}