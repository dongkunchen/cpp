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
	cout << "姓名: " << s.name << ", 年齡: " << s.age << ", 成績: " << s.score << endl;
}*/

//傳地址只占四個字節效能較好但是會修改所以加const
void printStudent(const student *s)
{
	cout << "姓名: " << s->name << ", 年齡: " << s->age << ", 成績: " << s->score << endl;
}

int main8() {

	struct student s = { "張三" , 18 , 80 };

	printStudent(&s);

	system("pause");

	return 0;
}