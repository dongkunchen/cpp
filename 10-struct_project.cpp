#include <iostream>
using namespace std;
#include <string>

struct Hero
{
	string name;
	int age;
	string sex;
};

void bubbleSort(struct Hero heroArray[], int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (heroArray[j].age > heroArray[j + 1].age)
			{
				struct Hero temp = heroArray[j];
				heroArray[j] = heroArray[j + 1];
				heroArray[j + 1] = temp;
			}
		}
	}
}

void printHero(struct Hero heroArray[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "姓名: " << heroArray[i].name
			<< " 年齡: " << heroArray[i].age
			<< " 性別: " << heroArray[i].sex << endl;
	}
}

int main() {

	struct Hero heroArray[5] =
	{
		{"劉備",23,"男"},
		{"關羽",22,"男"},
		{"張飛",20,"男"},
		{"趙雲",21,"男"},
		{"貂蟬",19,"女"}
	};
	int len = sizeof(heroArray) / sizeof(heroArray[0]);
	cout << "排序前打印: " << endl;
	for (int i = 0; i < len; i++)
	{
		cout << "姓名: " << heroArray[i].name
			<< " 年齡: " << heroArray[i].age
			<< " 性別: " << heroArray[i].sex << endl;
	}
	

	bubbleSort(heroArray, len);
	cout << "排序後打印: " << endl;
	printHero(heroArray, len);
	
	system("pause");

	return 0;
}