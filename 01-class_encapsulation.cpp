#include <iostream>
using namespace std;

const double PI = 3.14;

class Circle
{
public:

	int m_r;

	double calculateZC()
	{
		return 2 * PI * m_r;
	}
};

int main1() {

	Circle c1;

	c1.m_r = 10;

	cout << "¶êªº©Pªø¬°: " << c1.calculateZC() << endl;

	system("pause");

	return 0;
}