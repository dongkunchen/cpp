#include <iostream>
using namespace std;


//�h�A��������
//1.���~�����Y
//2.�l�����g��������

class Animal
{
public:
	//���� �i�H�ʺA�j�w�a�}
	virtual void speak()
	{
		cout << "�ʪ��b����" << endl;
	}
};

class Cat : public Animal
{
public:
	//��virtual�|���g
	void speak()
	{
		cout << "�p�ߦb����" << endl;
	}
};

class Dog : public Animal
{
public:
	void speak()
	{
		cout << "�p���b����" << endl;
	}
};

//�p�G�S���ƴN�|����� �ʪ�����
void doSpeak(Animal& animal)
{
	animal.speak();
}

void test01()
{
	Cat cat;
	doSpeak(cat);

	Dog dog;
	doSpeak(dog);
}



int main1() {
	 
	test01();

	system("pause");

	return 0;
}