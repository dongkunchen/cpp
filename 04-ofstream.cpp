#include <iostream>
using namespace std;
#include <fstream>

void test04()
{
	ofstream ofs;

	ofs.open("test.txt",ios::out);

	ofs << "姓名: 張三" << endl;
	ofs << "性別: 男" << endl;
	ofs << "年齡: 18" << endl;

	ofs.close();
}


int main4() {

	test04();

	system("pause");

	return 0;
}