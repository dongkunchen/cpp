#include <iostream>
using namespace std;
#include <list>

void test14()
{
	list<int>L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);

	cout << "第一個元素" << L1.front() << endl;
	cout << "最後一各元素" << L1.back() << endl;

	list<int>::iterator it = L1.begin();
	it++;//能加能減
	it--;//雙向
	//it = it + 1;//報錯不支持隨機

}


int main14() {

	test14();

	system("pause");

	return 0;
}