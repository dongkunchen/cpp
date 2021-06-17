#include <iostream>
using namespace std;
#include "swap.h"

//不需要返回加void 不用寫return
//抽取swap
/*void swap(int num1, int num2)
{
	cout << "交換前: " << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;
	int temp = num1;
	num1 = num2;
	num2 = temp;
	cout << "交換後: " << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;
}
*/

int main3() {

	int a = 10;
	int b = 20;
	swap(a, b);
	//值傳遞後a,b前後都不變

	system("pause");

	return 0;
}