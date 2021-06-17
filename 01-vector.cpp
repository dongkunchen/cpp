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
	//創建了一個vector容器
	vector<int> v;

	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);

	//vector<int>::iterator itBegin = v.begin();//指向起始位置
	//vector<int>::iterator itEnd = v.end();//指向結束位置的下一個位置
	////第一種遍歷方式
	//while (itBegin != itEnd)
	//{
	//	cout << *itBegin << endl;
	//	itBegin++;
	//}
	 
	//第二種遍歷方式
	/*for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << endl;
	}*/

	//第三種遍歷方式
	for_each(v.begin(), v.end(), myPrint);

}


int main1() {

	test01();

	system("pause");

	return 0;
}