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

	cout << "arr1���L: " << endl;

	printIntArray(arr1);
	cout << "arr1�e�q: " << arr1.getCapacity() << endl;
	cout << "arr1�j�p: " << arr1.getSize() <<endl;
	
	MyArray <int>arr2(arr1);
	cout << "arr2���L: " << endl;
	printIntArray(arr2);
	arr2.Pop_Back();
	cout << "arr2���R�ᥴ�L: " << endl;
	cout << "arr2�e�q: " << arr2.getCapacity() << endl;
	cout << "arr2�j�p: " << arr2.getSize() << endl;

	//MyArray <int>arr3(100);
	//arr3 = arr1;
}

//���զ۩w�q��
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
		cout << "�m�W: " << arr[i].m_Name << " ,�~��: " << arr[i].m_Age << endl;
	}
}

void test099()
{
	MyArray<Person> arr(10);

	Person p1("�]����", 999);
	Person p2("���H", 30);
	Person p3("�H�v", 20);
	Person p4("����", 25);
	Person p5("�w���", 27);

	arr.Push_Back(p1);
	arr.Push_Back(p2);
	arr.Push_Back(p3);
	arr.Push_Back(p4);
	arr.Push_Back(p5);

	//���L
	printPersonArray(arr);
	cout << "arr�e�q: " << arr.getCapacity() << endl;
	cout << "arr�j�p: " << arr.getSize() << endl;
}


int main9() {

	//test09();

	test099();


	system("pause");

	return 0;
}