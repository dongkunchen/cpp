#include <iostream>
using namespace std;
#include <string>

class Student
{
public:
	string s_Name;
	int s_Id;
	void showStudent()
	{
		cout << "�m�W: " << s_Name << " ,�Ǹ�: " << s_Id << endl;
	}

	void setName(string name)
	{
		s_Name = name;
	}
	void setId(int id)
	{
		s_Id = id;
	}

};

int main2() {

	//��Ҥƹ�H
	Student s1;
	s1.setName("�i�T");
	s1.setId(1001);
	s1.showStudent();

	Student s2;
	s2.s_Name = "���|";
	s2.s_Id = 1002;
	s2.showStudent();

	system("pause");

	return 0;
}