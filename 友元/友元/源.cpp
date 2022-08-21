#include<iostream>
using namespace std;

class Point
{
public:
	Point(int x, int y)
	{
		m_x = x;
		m_y = y;
	}
	//Point的友元函数,是一个声明
	friend int distance_x(Point&, Point&);
	//Point的友元类
	friend class Distance_y;
private:
	int m_x;
	int m_y;
};

class Distance_y
{
public:
	int get_y(Point& p1, Point& p2)
	{
		return p1.m_y - p2.m_y;
	}
};

int distance_x(Point& p1, Point& p2)
{
	return p1.m_x - p2.m_x;
}

int main()
{
	Point p1(10, 20);
	Point p2(15, 25);
	Distance_y d;
	int i = distance_x(p2, p1);
	cout << i << endl;
	i = d.get_y(p2, p1);
	cout << i << endl;
	return 0;
}