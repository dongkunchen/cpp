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
		//�i�L�o�ƾ�
		if (age < 0 || age > 150) 
		{
			m_Age = 0;
			cout << "�A�O�ѧ���?" << endl;
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
	p.setName("�i�T");
	cout << "�m�W��: " << p.getName() << endl;

	p.setAge(1000);
	cout << "�~��: " << p.getAge() << endl;

	system("pause");

	return 0;
}