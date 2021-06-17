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
		cout << "文件打開失敗" << endl;
		return;
	}

	//4.讀數據

	//方式一
	/*char buf[1024] = {0};
	while (ifs >> buf)
	{
		cout << buf << endl;
	}*/

	//方式二
	/*
	
	char buf[1024] = { 0 };
	while (ifs.getline(buf,sizeof(buf)))
	{
		cout << buf << endl;
	}*/

	//方式三
	/*string buf;

	while (getline(ifs, buf))
	{
		cout << buf << endl;
	}*/

	//方式四 效率低
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