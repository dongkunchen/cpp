#include <iostream>
using namespace std;
#include <functional>

void test04()
{
	//取反
	/*negate<int>n;

	cout << n(50) << endl;*/

	//相加
	plus<int>p;

	cout << p(10, 20) << endl;

}

int main4() {

	test04();

	system("pause");

	return 0;
}