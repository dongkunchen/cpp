#include <iostream>
using namespace std;
#include "swap.h"

//���ݭn��^�[void ���μgreturn
//���swap
/*void swap(int num1, int num2)
{
	cout << "�洫�e: " << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;
	int temp = num1;
	num1 = num2;
	num2 = temp;
	cout << "�洫��: " << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;
}
*/

int main3() {

	int a = 10;
	int b = 20;
	swap(a, b);
	//�ȶǻ���a,b�e�᳣����

	system("pause");

	return 0;
}