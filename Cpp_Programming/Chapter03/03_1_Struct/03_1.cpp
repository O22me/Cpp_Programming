#include <iostream>

using namespace std;

struct Point
{
	int xPos;
	int yPos;

	void MovePos(int x, int y)
	{
		xPos += x;
		yPos += y;
	}

	void AddPoint(const Point& pos)
	{
		xPos += pos.xPos;
		yPos += pos.yPos;
	}

	void ShowPosition()
	{
		cout << "[" << xPos << ", " << yPos << "]" << endl;;
	}
};



int main(void)
{
	Point pos1 = { 12, 4 };
	Point pos2 = { 20, 30 };

	pos1.MovePos(-7, 10);
	pos1.ShowPosition();

	pos1.AddPoint(pos2);
	pos1.ShowPosition();
	return 0;
}