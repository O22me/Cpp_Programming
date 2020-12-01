#include <iostream>
#include "Point.h"

using namespace std;

bool Point::InitMembers(int xPos, int yPos)
{
	if (xPos < 0 || yPos < 0)
	{
		cout << "��� ������ �� ����" << endl;
		return false;
	}

	x = xPos;
	y = yPos;
	return true;
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