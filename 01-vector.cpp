#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

void myPrint(int val)
{
	cout << val << endl;
}


void test01()
{
	//�ЫؤF�@��vector�e��
	vector<int> v;

	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);

	//vector<int>::iterator itBegin = v.begin();//���V�_�l��m
	//vector<int>::iterator itEnd = v.end();//���V������m���U�@�Ӧ�m
	////�Ĥ@�عM���覡
	//while (itBegin != itEnd)
	//{
	//	cout << *itBegin << endl;
	//	itBegin++;
	//}
	 
	//�ĤG�عM���覡
	/*for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << endl;
	}*/

	//�ĤT�عM���覡
	for_each(v.begin(), v.end(), myPrint);

}


int main1() {

	test01();

	system("pause");

	return 0;
}