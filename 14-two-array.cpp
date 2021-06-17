#include<iostream>
using namespace std;

int main14() {

	int scores[3][3] =
	{
		{100,100,100},
		{90,50,100},
		{60,70,80}
	};

	string names[3] = { "張三","李四","王五" };

	for (int i = 0; i < 3; i++) //行
	{
		int sum = 0;
		for(int j = 0; j < 3; j++)	//列
		{
			sum += scores[i][j];
			cout << scores[i][j] << " ";//空格分開
		}
		cout << names[i] << "個人的總分是: " << sum << endl;//換行
	}

	system("pause");

	return 0;
}