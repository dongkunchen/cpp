#include <iostream>
using namespace std;

void swap01(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	cout << "�洫�� a = " << a << endl;
	cout << "�洫�� b = " << b << endl;
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
	//�ȶǻ�a b ����
	//swap01(10, 20);

	//�a�}�ǻ� a b ���ܤF
	swap02(&a, &b);

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	system("pause");

	return 0;
}