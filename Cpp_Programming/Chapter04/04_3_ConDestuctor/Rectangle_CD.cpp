#include <iostream>
#include "Rectangle_CD.h"

using namespace std;

//이니셜라이저를 활용한 초기화. 일반적으로 멤버변수를 초기화 할 땐 이니셜라이저를 선호한다. 또한 const 멤버변수도 초기화 가능.
Rectangle::Rectangle(const int& x1, const int& y1, const int& x2, const int& y2) : upLeft(x1, y1), lowRight(x2, y2) 
{
	// empty
}

void Rectangle::ShowRecInfo() const
{
	cout << "좌 상단: " << '[' << upLeft.GetX() << ", ";
	cout << upLeft.GetY() << ']' << endl;
	cout << "우 하단: " << '[' << lowRight.GetX() << ", ";
	cout << lowRight.GetY() << ']' << endl << endl;
}