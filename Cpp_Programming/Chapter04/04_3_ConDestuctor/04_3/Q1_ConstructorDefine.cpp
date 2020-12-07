#include <iostream>

using namespace std;

class Point
{
private:
	int xPos, yPos;
public:
	Point(int x, int y) : xPos(x), yPos(y)
	{
	}
	void ShowPointInfo() const
	{
		cout << "[" << xPos << ", " << yPos << "]" << endl;
	}
	int GetX() const
	{
		return xPos;
	}
	int GetY() const
	{
		return yPos;
	}
};

class Circle
{
private:
	Point dot;
	int radius;
public:
	Circle(int x1, int y1, int rad) : dot(x1, y1), radius(rad)
	{
	}
	int GetRadius() const
	{
		return radius;
	}
	Point GetPoint() const
	{
		return dot;
	}
};

class Ring
{
private:
	Circle inner, outter;
public:
	Ring(int x1, int y1, int inner_rad, int x2, int y2, int outter_rad) : inner(x1, y1, inner_rad), outter(x2, y2, outter_rad)
	{
	}
	void ShowRingInfo() const
	{
		cout << "Inner Circle Info..." << endl;
		cout << "radius: " << inner.GetRadius() << endl;
		cout << "[" << inner.GetPoint().GetX() << ", " << inner.GetPoint().GetY() << "]" << endl;
		cout << "Outter Circle Info..." << endl;
		cout << "radius: " << outter.GetRadius() << endl;
		cout << "[" << outter.GetPoint().GetX() << ", " << outter.GetPoint().GetY() << "]" << endl;
	}
};

int main(void)
{
	Ring ring(1, 1, 4, 2, 2, 9);
	ring.ShowRingInfo();
	return 0;
}