#include <iostream>
using namespace std;
#include <list>

void printList12(const list<int>& L)
{
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test12()
{
	list<int>L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);

	printList12(L1);

	if (L1.empty())
	{
		cout << "L1為空" << endl;
	}
	else
	{
		cout << "L1不為空" << endl;
		cout << "L1的元素大小: " << L1.size() << endl;
	}

	L1.resize(10, 10000);
	printList12(L1);

	L1.resize(2);
	printList12(L1);
}


int main12() {

	test12();

	system("pause");

	return 0;
}