#include<iostream>
using namespace std;

int main8() {

	cout << "Hello World!" << endl;

	short num1 = 10;

	int num2 = 10;

	long num3 = 10;

	long long num4 = 10;

	cout << "short字節長度: " << sizeof(num1) << endl;

	cout << "int字節長度: " << sizeof(num2) << endl;

	cout << "long字節長度: " << sizeof(long) << endl;

	cout << "long long字節長度: " << sizeof(long long) << endl;

	system("pause");

	return 0;
}