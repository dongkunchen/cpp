#include <iostream>
using namespace std;
#include <stack>

void test08()
{
	stack<int>s;

	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);

	cout << "�̪��j�p: " << s.size() << endl;

	while (!s.empty()) 
	{
		cout << "�̳�����: " << s.top() << endl;

		s.pop();
	}

	cout << "�̪��j�p: " << s.size() << endl;

}

int main8() {

	test08();

	system("pause");

	return 0;
}