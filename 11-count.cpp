#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include <string>

void test11()
{
	vector<int>v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(30);
	v.push_back(30);

	int num = count(v.begin(), v.end(), 30);

	cout << "找到 " << num << " 個" << endl;
}

class Person11
{
public:
	Person11(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	bool operator==(const Person11& p)
	{
		if(this->m_Age ==  p.m_Age)
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


void test111()
{
	vector<Person11>v;
	
	Person11 p1("劉備", 35);
	Person11 p2("關羽", 35);
	Person11 p3("張飛", 35);
	Person11 p4("趙雲", 30);
	Person11 p5("曹操", 33);
	Person11 p6("孫權", 31);
	Person11 p7("黃忠", 40);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);
	v.push_back(p6);
	v.push_back(p7);

	Person11 p("諸葛亮", 35);

	int num = count(v.begin(), v.end(), p);

	cout << "與諸葛亮同歲數的有: " << num << " 個" << endl;

}

int main11() {

	test11();
	test111();

	system("pause");
	
	return 0;
}