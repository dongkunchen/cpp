#include<iostream>
using namespace std;

int main10() {

	cout << "�п������" << endl;
	cout << "���q" << endl;
	cout << "����" << endl;
	cout << "�x��" << endl;

	int select = 0;

	cin >> select;

	switch (select)
	{
	case 1:
		cout << "�z��ܴ��q����" << endl;
		break;
	case 2:
		cout << "�z��ܤ�������" << endl;
		break;
	case 3:
		cout << "�z��ܧx������" << endl;
		break;
	default:
		break;
	}



	system("pause");
	
	return 0;
}