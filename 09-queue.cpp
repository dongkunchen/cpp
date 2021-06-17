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

	Person p1("唐僧", 30);
	Person p2("孫悟空", 1000);
	Person p3("豬八戒", 900);
	Person p4("沙僧", 800);

	q.push(p1);
	q.push(p2);
	q.push(p3);
	q.push(p4);

	cout << "隊列的大小為: " << q.size() << endl;

	while (!q.empty())
	{
		cout << "隊頭元素---姓名: " << q.front().m_Name << "年齡: " << q.front().m_Age << endl;

		cout << "隊尾元素---姓名: " << q.back().m_Name << "年齡: " << q.back().m_Age << endl;

		q.pop();
	}

	cout << "隊列的大小為: " << q.size() << endl;


}

int main9() {

	test09();

	system("pause");

	return 0;
}