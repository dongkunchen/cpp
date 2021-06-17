#include <iostream>
using namespace std;
#include <map>

void test06()
{
	map<int, int>m;
	m.insert(pair<int,int>(1,10));
	m.insert(pair<int,int>(2,30));
	m.insert(pair<int,int>(3,20));
	m.insert(pair<int,int>(4,40));

	if (m.empty())
	{
		cout << "為空" << endl;
	}
	else
	{
		cout << "不為空" << endl;
		cout << "大小" << m.size() << endl;
	}
}

void printMap06(map<int, int>m)
{
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key: " << it->first << " ,value: " << it->second << endl;
	}
}

void test066()
{
	map<int, int> m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(3, 30));
	m.insert(pair<int, int>(4, 40));

	map<int, int> m1;
	m1.insert(pair<int, int>(5, 40));
	m1.insert(pair<int, int>(6, 30));
	m1.insert(pair<int, int>(7, 20));
	m1.insert(pair<int, int>(8, 10));

	cout << "交換前" << endl;
	printMap06(m);
	printMap06(m1);

	m.swap(m1);
	cout << "交換後" << endl;
	printMap06(m);
	printMap06(m1);


}

int main6() {

	test066();

	system("pause");

	return 0;
}