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
		//可過濾數據
		if (age < 0 || age > 150) 
		{
			m_Age = 0;
			cout << "你是老妖精?" << endl;
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
	p.setName("張三");
	cout << "姓名為: " << p.getName() << endl;

	p.setAge(1000);
	cout << "年齡: " << p.getAge() << endl;

	system("pause");

	return 0;
}