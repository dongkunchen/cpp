#include <iostream>
using namespace std;
#include <map>

void test08()
{
	map<int, int> m;
	m.insert(make_pair(1, 10));
	m.insert(make_pair(2, 20));
	m.insert(make_pair(3, 30));

	map<int, int>::iterator pos = m.find(3);
	if (pos != m.end())
	{
		cout << "找到了匹配的數據 key = " << pos->first << " ,value = " << pos->second << endl;
	}
	else
	{
		cout << "未找到任何匹配數據!";
	}

	int num = m.count(3);
	cout << "num = " << num << endl;


}

int main8() {

	test08();

	system("pause");
	
	return 0;
}