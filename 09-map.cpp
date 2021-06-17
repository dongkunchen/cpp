#include <iostream>
using namespace std;
#include <map>

class myCompare
{
public:
	bool operator()(int v1, int v2)const
	{
		return v1 > v2;
	}
};

void test09()
{
	map<int,int,myCompare> m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(3, 30));
	m.insert(pair<int, int>(4, 40));
	m.insert(pair<int, int>(5, 50));

	for (map<int, int,myCompare>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key = " << it->first << "  value = " << it->second << endl;
	}
}


int main9() {

	test09();
	
	system("pause");

	return 0;
}