#include<iostream>
using namespace std;

int main14() {

	int scores[3][3] =
	{
		{100,100,100},
		{90,50,100},
		{60,70,80}
	};

	string names[3] = { "�i�T","���|","����" };

	for (int i = 0; i < 3; i++) //��
	{
		int sum = 0;
		for(int j = 0; j < 3; j++)	//�C
		{
			sum += scores[i][j];
			cout << scores[i][j] << " ";//�Ů���}
		}
		cout << names[i] << "�ӤH���`���O: " << sum << endl;//����
	}

	system("pause");

	return 0;
}