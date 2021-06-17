#include <iostream>
using namespace std;


//多態滿足條件
//1.有繼承關係
//2.子類重寫父類虛函數

class Animal
{
public:
	//虛函數 可以動態綁定地址
	virtual void speak()
	{
		cout << "動物在說話" << endl;
	}
};

class Cat : public Animal
{
public:
	//有virtual會重寫
	void speak()
	{
		cout << "小貓在說話" << endl;
	}
};

class Dog : public Animal
{
public:
	void speak()
	{
		cout << "小狗在說話" << endl;
	}
};

//如果沒虛函數就會執行父 動物說話
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