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
		cout << "姓名: " << s_Name << " ,學號: " << s_Id << endl;
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

	//實例化對象
	Student s1;
	s1.setName("張三");
	s1.setId(1001);
	s1.showStudent();

	Student s2;
	s2.s_Name = "李四";
	s2.s_Id = 1002;
	s2.showStudent();

	system("pause");

	return 0;
}