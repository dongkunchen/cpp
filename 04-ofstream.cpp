#include <iostream>
using namespace std;
#include <fstream>

void test04()
{
	ofstream ofs;

	ofs.open("test.txt",ios::out);

	ofs << "�m�W: �i�T" << endl;
	ofs << "�ʧO: �k" << endl;
	ofs << "�~��: 18" << endl;

	ofs.close();
}


int main4() {

	test04();

	system("pause");

	return 0;
}