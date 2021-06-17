#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include <ctime>

void myPrint14(int val)
{
	cout << val << " ";
}
void test14()
{
	//ÀH¾÷ºØ¤l
	srand((unsigned int)time(NULL));

	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	random_shuffle(v.begin(), v.end());
	for_each(v.begin(), v.end(), myPrint14);
	cout << endl;
}

int main14() {

	test14();

	system("pause");

	return 0;
}