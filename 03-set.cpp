#include <iostream>
using namespace std;
#include <set>

class MyCompare
{
public:
	bool operator()(int v1, int v2)const//2019後面要加const不然會報錯
	{
		return v1 > v2; //前面數大於後面 前面大所以降序
	}
};

void test03()
{
	set<int>s1;
	s1.insert(10);
	s1.insert(20);
	s1.insert(30);
	s1.insert(50);
	s1.insert(40);

	for (set<int>::iterator it = s1.begin(); it != s1.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

	set<int, MyCompare>s2;
	s2.insert(10);
	s2.insert(20);
	s2.insert(30);
	s2.insert(50);
	s2.insert(40);

	for (set<int, MyCompare>::iterator it = s2.begin(); it != s2.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

}

int main3() {

	test03();

	system("pause");

	return 0;
}