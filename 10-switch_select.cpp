#include<iostream>
using namespace std;

int main10() {

	cout << "請選擇難度" << endl;
	cout << "普通" << endl;
	cout << "中等" << endl;
	cout << "困難" << endl;

	int select = 0;

	cin >> select;

	switch (select)
	{
	case 1:
		cout << "您選擇普通難度" << endl;
		break;
	case 2:
		cout << "您選擇中等難度" << endl;
		break;
	case 3:
		cout << "您選擇困難難度" << endl;
		break;
	default:
		break;
	}



	system("pause");
	
	return 0;
}