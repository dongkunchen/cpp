#include <iostream>
using namespace std;
#include <list>
#include <algorithm>

void printList15(const list<int>& L)
{
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test15() 
{
	list<int>L1;
	L1.push_back(20);
	L1.push_back(10);
	L1.push_back(50);
	L1.push_back(40);
	L1.push_back(30);

	printList15(L1);

	L1.reverse();
	printList15(L1);
}

bool myCompare(int v1, int v2)
{
	//���ǴN���Ĥ@�Ӽ� > �ĤG�Ӽ�
	return v1 > v2;
}

void test155()
{
	list<int>L1;
	L1.push_back(20);
	L1.push_back(10);
	L1.push_back(50);
	L1.push_back(40);
	L1.push_back(30);

	printList15(L1);

	//�L�H���X�ݭ��N������Υ�����k�u��դ�����k�Ѧ�vector
	//list �u�����V���N��
	//�q�{�ɧ�
	L1.sort();
	printList15(L1);

	//�g�Ө�Ʃ�J�N���{����
	L1.sort(myCompare);
	printList15(L1);
}


int main15() {

	test155();

	system("pause");

	return 0;
}