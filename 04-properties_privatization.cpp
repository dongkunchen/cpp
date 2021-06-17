#include <iostream>
using namespace std;
#include <string>

class Person
{
public:
	void setName(string name)
	{
		m_Name = name;
	}
	string getName()
	{
		return m_Name;
	}
	void setAge(int age)
	{
		if (age < 0 || age > 150) 
		{
			m_Age = 0;
			cout << "Are you old fairy?" << endl;
			return;
		}
		m_Age = age;
	}
	int getAge()
	{
		return m_Age;
	}
private:
	string m_Name;
	int m_Age;
	string m_Lover;
};


int main4() {

	Person p;
	p.setName("zhangsan");
	cout << "姓名為: " << p.getName() << endl;

	p.setAge(1000);
	cout << "Age: " << p.getAge() << endl;

	system("pause");

	return 0;
}
