#include <iostream>
using namespace std;

int main4() {

	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	cout << "第一個元素為: " << arr[0] << endl;

	int* p = arr;//普通變量要加&才能訪問地址

	cout << "利用指針訪問第一個元素: " << *p << endl;

	p++;//讓指針偏移四個字節

	cout << "利用指針訪問第二個元素: " << *p << endl;

	//利用指針遍歷元素
	cout << "利用指針遍歷數組" << endl;

	int* p2 = arr;

	for (int i = 0; i < 10; i++)
	{
		cout << *p2 << endl;
		p2++;
	}

	system("pause");

	return 0;
}