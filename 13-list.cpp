#include <iostream>
using namespace std;
#include <list>

void printList13(const list<int>& L)
{
	for (list<int>::const_iterator it = L.begin(); it != L.end();it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test13()
{
	list<int>L;

	L.push_back(10);
	L.push_back(20);
	L.push_back(30);

	L.push_front(100);
	L.push_front(200);
	L.push_front(300);

	printList13(L);
	
	L.pop_back();
	printList13(L);

	L.pop_front();
	printList13(L);

	list<int>::iterator it = L.begin();
	L.insert(++it,1000);
	//L.insert( L.begin(),1000);
	printList13(L);

	it = L.begin();
	//L.erase(it);
	L.erase(++it);
	printList13(L);

	L.push_back(10000);
	L.push_back(10000);
	L.push_back(10000);
	printList13(L);
	L.remove(10000);//§R°£©Ò¦³10000
	printList13(L);

	L.clear();
	printList13(L);

}

int main13() {

	test13();

	system("pause");

	return 0;

}