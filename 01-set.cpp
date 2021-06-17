#include <iostream>
using namespace std;
#include <set>

void printSet(const set<int>s)
{
	for (set<int>::const_iterator it = s.begin(); it != s.end();it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test()
{
	set<int>s1;

	s1.insert(10);
	s1.insert(20);
	s1.insert(40);
	s1.insert(30);
	s1.insert(30);

	// ·|¦Û°Ê±Æ§Ç¨Ã¥h­«
	printSet(s1);

	set<int>s2(s1);
	printSet(s2);

	set<int>s3;
	s3 = s2;
	printSet(s3);

}

int main() {

	test();

	system("pause");

	return 0;
}
