#include <iostream>
using namespace std;
#include <list>

void printList11(const list<int>& L)
{
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test11()
{
	list<int>L1;

	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);
	printList11(L1);

	list<int>L2;
	L2 = L1;
	printList11(L2);

	list<int>L3;
	L3.assign(L2.begin(), L2.end());
	printList11(L3);

	list<int>L4;
	L4.assign(10, 100);
	printList11(L1);

}


void test111()
{
	list<int>L1;

	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);

	list<int>L2;
	L2.assign(10,100);
	cout << "交換前: " << endl;
	printList11(L1);
	printList11(L2);

	swap(L1, L2);
	cout << "交換後: " << endl;
	printList11(L1);
	printList11(L2);


}

int main11() {

	test111();

	system("pause");

	return 0;
}