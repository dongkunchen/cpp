#include <iostream>
using namespace std;
#include <string>

struct student
{
	string name;
	int age;
	int score;
};

/*void printStudent(student s)
{
	cout << "�m�W: " << s.name << ", �~��: " << s.age << ", ���Z: " << s.score << endl;
}*/

//�Ǧa�}�u�e�|�Ӧr�`�į���n���O�|�ק�ҥH�[const
void printStudent(const student *s)
{
	cout << "�m�W: " << s->name << ", �~��: " << s->age << ", ���Z: " << s->score << endl;
}

int main8() {

	struct student s = { "�i�T" , 18 , 80 };

	printStudent(&s);

	system("pause");

	return 0;
}