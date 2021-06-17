#include <iostream>
using namespace std;
#include <set>

void printSet02(set<int>s)
{
	for (set<int>::iterator it = s.begin(); it != s.end();it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}


void test02()
{
	set<int>s1;

	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(40);

	printSet02(s1);

	if (s1.empty()) 
	{
		cout << "s1為空" << endl;
	}
	else
	{
		cout << "s1不為空" << endl;
		cout << "s1大小" << s1.size() << endl;
	}

}


int main2() {

	test02();

	system("pause");

	return 0;
}