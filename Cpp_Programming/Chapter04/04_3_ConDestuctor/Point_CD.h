#ifndef __POINT_H_
#define __POINT_H_

class Point
{
private:
	int x;
	int y;
public:
	Point(const int& xPos, const int& yPos); //»ý¼ºÀÚ
	int GetX() const;
	int GetY() const;
	bool SetX(int xPos);
	bool SetY(int yPos);
};
#endif