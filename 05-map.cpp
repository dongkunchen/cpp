#include <iostream>
using namespace std;
#include <map>

void printMap(map<int, int>& m)
{
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key: " << (*it).first << " ,value: " << (*it).second << endl;
	}
}

void test05()
{
	map<int, int> m;

	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 30));
	m.insert(pair<int, int>(3, 50));
	m.insert(pair<int, int>(4, 40));

	//會按照key排序
	printMap(m);

	//拷貝構造
	map<int, int> m2(m);
	printMap(m2);

	map<int, int> m3;
	m3 = m2;
	printMap(m3);


}


int main5() {

	test05();

	system("pause");

	return 0;
}