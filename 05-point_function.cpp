#include <iostream>
using namespace std;

void swap01(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	cout << "交換後 a = " << a << endl;
	cout << "交換後 b = " << b << endl;
}

void swap02(int* p1, int* p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}


int main5() {

	int a = 10;
	int b = 20;
	//值傳遞a b 不變
	//swap01(10, 20);

	//地址傳遞 a b 改變了
	swap02(&a, &b);

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	system("pause");

	return 0;
}