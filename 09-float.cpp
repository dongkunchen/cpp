#include<iostream>
using namespace std;

int main9() {

	//1.單精度 float
	//2.雙精度 double
	//默認情況下 輸出一個小數會顯示6為有效數字

	float f1 = 3.1415926f;

	cout << "f1 = " << f1 << endl;

	double d1 = 3.1415926;

	cout << "d1 = " << d1 << endl;

	cout << "float佔用內存空間為: " << sizeof(f1) << endl;

	cout << "double佔用內存空間為: " << sizeof(d1) << endl;

	//科學計數法
	float f2 = 3e2; //3*10^2; 300

	cout << "f2 = " << f2 << endl;

	float f3 = 3e-2; //3*0.1^2 0.03

	cout << "f3 = " << f3 << endl;

	system("pause");

	return 0;
}