#include <iostream>
using namespace std;
#include <fstream>
#include <string>

void test05()
{
	ifstream ifs;

	ifs.open("test.txt", ios::in);

	if (!ifs.is_open())
	{
		cout << "��󥴶}����" << endl;
		return;
	}

	//4.Ū�ƾ�

	//�覡�@
	/*char buf[1024] = {0};
	while (ifs >> buf)
	{
		cout << buf << endl;
	}*/

	//�覡�G
	/*
	
	char buf[1024] = { 0 };
	while (ifs.getline(buf,sizeof(buf)))
	{
		cout << buf << endl;
	}*/

	//�覡�T
	/*string buf;

	while (getline(ifs, buf))
	{
		cout << buf << endl;
	}*/

	//�覡�| �Ĳv�C
	char c;
	while ((c = ifs.get()) != EOF)
	{
		cout << c;
	}

	ifs.close();
}


int main5() {

	test05();

	system("pause");

	return 0;
}