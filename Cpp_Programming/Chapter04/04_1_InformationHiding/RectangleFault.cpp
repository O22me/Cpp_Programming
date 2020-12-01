#include <iostream>

using namespace std;

class Point
{
public:
	int x;
	int y;
};

class Rectangle
{
public:
	Point upLeft;
	Point lowRight;
public:
	void ShowRecInfo()
	{
		cout << "좌 상단: " << '[' << upLeft.x << ", ";
		cout << upLeft.y << ']' << endl;
		cout << "우 하단: " << '[' << lowRight.x << ", ";
		cout << lowRight.y << ']' << endl << endl;
	}
};

int main(void)
{
	Point pos1 = { -2, 4 }; //0~100 사이 값이 아닌 잘못된 값 전달
	Point pos2 = { 5, 9 }; //우 하단 값으로 적절하지 못함.
	Rectangle rec = { pos1, pos2 };
	rec.ShowRecInfo();
	return 0;
}