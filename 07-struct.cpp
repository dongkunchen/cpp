#include <iostream>
using namespace std;
#include <string>

//�Ыص��c
struct Student 
{
	string name;
	int age;
	int score;
}s3;//�覡�T���K�Ф@�ӵ��c���ܶq


int main7() {

	//�q�L���c�Ыب���ǥ�
	//�覡1 struct�i�H�ٲ�
	//struct Student s1;
	Student s1;
	s1.name = "�i�T";
	s1.age = 18;
	s1.score = 100;

	cout << "�m�W: " << s1.name << ", �~��: " << s1.age << ", ���Z: " << s1.score << endl;

	//�覡�G
	struct Student s2 = { "���|" , 19 , 90 };
	cout << "�m�W: " << s2.name << ", �~��: " << s2.age << ", ���Z: " << s2.score << endl;

	//�覡�T
	s3.name = "����";
	s3.age = 20;
	s3.score = 80;
	cout << "�m�W: " << s3.name << ", �~��: " << s3.age << ", ���Z: " << s3.score << endl;

	system("pause");

	return 0;
}