#include <iostream>

using namespace std;

class Point
{
private:
	int xpos, ypos;
public:
	Point(int x, int y) : xpos(x), ypos(y)
	{
	}
	void ShowPosition() const
	{
		cout << "[ " << xpos << ", " << ypos << " ]" << endl;
	}
	friend Point operator-(const Point& p1, const Point& p2);
	Point& operator+=(const Point& ref)
	{
		xpos += ref.xpos;
		ypos += ref.ypos;
		return *this;
	}
	Point& operator-=(const Point& ref)
	{
		xpos -= ref.xpos;
		ypos -= ref.ypos;
		return *this;
	}
	friend bool operator==(const Point& p1, const Point& p2);
	friend bool operator!=(const Point& p1, const Point& p2);
};

Point operator-(const Point& p1, const Point& p2)
{
	Point pos(p1.xpos - p2.xpos, p1.ypos - p2.ypos);
	return pos;
}

bool operator==(const Point& p1, const Point& p2)
{
	if ((p1.xpos == p2.xpos) && (p1.ypos == p2.ypos))
	{
		return true;
	}
	else return false;
}
bool operator!=(const Point& p1, const Point& p2)
{
	return !(p1 == p2);
}

int main(void)
{
	Point pos1(3, 4);
	Point pos2(1, 2);
	Point pos3 = pos1 - pos2;
	
	pos1.ShowPosition();
	pos2.ShowPosition();
	pos3.ShowPosition();
	return 0;
}