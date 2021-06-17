#include <iostream>
using namespace std;
#include <string>

//創建結構
struct Student 
{
	string name;
	int age;
	int score;
}s3;//方式三順便創一個結構體變量


int main7() {

	//通過結構創建具體學生
	//方式1 struct可以省略
	//struct Student s1;
	Student s1;
	s1.name = "張三";
	s1.age = 18;
	s1.score = 100;

	cout << "姓名: " << s1.name << ", 年齡: " << s1.age << ", 成績: " << s1.score << endl;

	//方式二
	struct Student s2 = { "李四" , 19 , 90 };
	cout << "姓名: " << s2.name << ", 年齡: " << s2.age << ", 成績: " << s2.score << endl;

	//方式三
	s3.name = "王五";
	s3.age = 20;
	s3.score = 80;
	cout << "姓名: " << s3.name << ", 年齡: " << s3.age << ", 成績: " << s3.score << endl;

	system("pause");

	return 0;
}