#include <iostream>
using namespace std;
#include <list>

void test14()
{
	list<int>L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);

	cout << "�Ĥ@�Ӥ���" << L1.front() << endl;
	cout << "�̫�@�U����" << L1.back() << endl;

	list<int>::iterator it = L1.begin();
	it++;//��[���
	it--;//���V
	//it = it + 1;//����������H��

}


int main14() {

	test14();

	system("pause");

	return 0;
}