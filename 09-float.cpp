#include<iostream>
using namespace std;

int main9() {

	//1.���� float
	//2.����� double
	//�q�{���p�U ��X�@�Ӥp�Ʒ|���6�����ļƦr

	float f1 = 3.1415926f;

	cout << "f1 = " << f1 << endl;

	double d1 = 3.1415926;

	cout << "d1 = " << d1 << endl;

	cout << "float���Τ��s�Ŷ���: " << sizeof(f1) << endl;

	cout << "double���Τ��s�Ŷ���: " << sizeof(d1) << endl;

	//��ǭp�ƪk
	float f2 = 3e2; //3*10^2; 300

	cout << "f2 = " << f2 << endl;

	float f3 = 3e-2; //3*0.1^2 0.03

	cout << "f3 = " << f3 << endl;

	system("pause");

	return 0;
}