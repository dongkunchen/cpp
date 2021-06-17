#include <iostream>
using namespace std;
#include <string>

void test04()
{
	string s1;

	const char* str = "hello world";
	string s2(str);

	cout << "s2 = " << s2 << endl;

	string s3(s2);
	cout << "s3 = " << s3 << endl;

	string s4(10, 'a');
	cout << "s4 = " << s4 << endl;

}


int main4() {

	test04();

	system("pause");

	return 0;
}