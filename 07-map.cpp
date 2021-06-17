#include <iostream>
using namespace std;
#include <map>

void printMap07(map<int, int>& m)
{
	for (map<int, int>::iterator it = m.begin(); it != m.end();it++)
	{
		cout << "key = " << it->first << " ,value = " << it->second << endl;
	}
}

void test07()
{
	map<int, int> m;
	m.insert(pair<int, int>(1, 10));
	m.insert(make_pair(2, 20));
	m.insert(map<int, int>::value_type(3, 30));
	m[4] = 40;

	printMap07(m);
}

int main7() {

	test07();

	system("pause");

	return 0;
}