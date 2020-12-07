#include <iostream>
#include "Point_CD.h"

using namespace std;

Point::Point(const int& xPos, const int& yPos)
{
	x = xPos;
	y = yPos;
}

int Point::GetX() const
{
	return x;
}

int Point::GetY() const
{
	return y;
}

bool Point::SetX(int xPos)
{
	if (0 > xPos || xPos > 100)
	{
		cout << "��� ������ �� ����" << endl;
		return false;
	}
	x = xPos;
	return true;
}

bool Point::SetY(int yPos)
{
	if (0 > yPos || yPos > 100)
	{
		cout << "��� ������ �� ����" << endl;
		return false;
	}
	y = yPos;
	return true;
}