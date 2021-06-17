#include <iostream>
using namespace std;
#include "circle.h"
#include "point.h"

/*
class Point
{
public:

	void setX(int x)
	{
		m_X = x;
	}

	int getX()
	{
		return m_X;
	}

	void setY(int y)
	{
		m_Y = y;
	}

	int getY()
	{
		return m_Y;
	}

private:
	int m_X;
	int m_Y;
};*/


/*
class Circle
{
public:

	void setR(int r)
	{
		m_R = r;
	}

	int getR()
	{
		return m_R;
	}

	void setCenter(Point center)
	{
		m_Center = center;
	}

	Point getCenter()
	{
		return m_Center;
	}

private:
	int m_R;
	Point m_Center;
};*/

//判斷點和圓的關係
void isInCircle(Circle& c, Point& p)
{
	int distance =
		(c.getCenter().getX() - p.getX())* (c.getCenter().getX() - p.getX()) +
		(c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());

	int rDistance = c.getR() * c.getR();

	if (distance == rDistance)
	{
		cout << "點在圓上" << endl;
	}
	else if (distance > rDistance)
	{
		cout << "點在圓外" << endl;
	}
	else
	{
		cout << "點在圓內" << endl;
	}
}

int main6() {

	//創建一個圓
	Circle c;
	c.setR(10);
	Point center;
	center.setX(10);
	center.setY(0);
	c.setCenter(center);

	//創建點
	Point p;
	p.setX(10);
	p.setY(10);

	isInCircle(c, p);

	system("pause");

	return 0;
}