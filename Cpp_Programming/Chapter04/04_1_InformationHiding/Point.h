#pragma once
#ifndef __POINT_H_
#define __POINT_H_

class Point
{
private:
	int x;
	int y;
public:
	bool InitMembers(int xPos, int yPos);
	int GetX() const;
	int GetY() const;
	bool SetX(int xPos);
	bool SetY(int yPos);
};
#endif