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
		cout << "�m�W: " << heroArray[i].name
			<< " �~��: " << heroArray[i].age
			<< " �ʧO: " << heroArray[i].sex << endl;
	}
}

int main() {

	struct Hero heroArray[5] =
	{
		{"�B��",23,"�k"},
		{"����",22,"�k"},
		{"�i��",20,"�k"},
		{"����",21,"�k"},
		{"�I��",19,"�k"}
	};
	int len = sizeof(heroArray) / sizeof(heroArray[0]);
	cout << "�Ƨǫe���L: " << endl;
	for (int i = 0; i < len; i++)
	{
		cout << "�m�W: " << heroArray[i].name
			<< " �~��: " << heroArray[i].age
			<< " �ʧO: " << heroArray[i].sex << endl;
	}
	

	bubbleSort(heroArray, len);
	cout << "�Ƨǫᥴ�L: " << endl;
	printHero(heroArray, len);
	
	system("pause");

	return 0;
}