#include <iostream>
using namespace std;
#include "MyArray.hpp"

void printIntArray(MyArray <int>&arr)
{
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << endl;
	}
}

void test09()
{
	MyArray <int>arr1(5);
	for (int i = 0; i < 5; i++)
	{
		arr1.Push_Back(i);
	}

	cout << "arr1打印: " << endl;

	printIntArray(arr1);
	cout << "arr1容量: " << arr1.getCapacity() << endl;
	cout << "arr1大小: " << arr1.getSize() <<endl;
	
	MyArray <int>arr2(arr1);
	cout << "arr2打印: " << endl;
	printIntArray(arr2);
	arr2.Pop_Back();
	cout << "arr2尾刪後打印: " << endl;
	cout << "arr2容量: " << arr2.getCapacity() << endl;
	cout << "arr2大小: " << arr2.getSize() << endl;

	//MyArray <int>arr3(100);
	//arr3 = arr1;
}

//測試自定義類
class Person
{
public:

	Person() {};
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	string m_Name;
	int m_Age;
};

void printPersonArray(MyArray<Person>& arr)
{
	for (int i = 0; i < arr.getSize() ; i++)
	{
		cout << "姓名: " << arr[i].m_Name << " ,年齡: " << arr[i].m_Age << endl;
	}
}

void test099()
{
	MyArray<Person> arr(10);

	Person p1("孫悟空", 999);
	Person p2("韓信", 30);
	Person p3("妲己", 20);
	Person p4("趙雲", 25);
	Person p5("安其拉", 27);

	arr.Push_Back(p1);
	arr.Push_Back(p2);
	arr.Push_Back(p3);
	arr.Push_Back(p4);
	arr.Push_Back(p5);

	//打印
	printPersonArray(arr);
	cout << "arr容量: " << arr.getCapacity() << endl;
	cout << "arr大小: " << arr.getSize() << endl;
}


int main9() {

	//test09();

	test099();


	system("pause");

	return 0;
}