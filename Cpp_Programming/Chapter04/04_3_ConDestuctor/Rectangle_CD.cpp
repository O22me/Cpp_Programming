#include <iostream>
#include "Rectangle_CD.h"

using namespace std;

//�̴ϼȶ������� Ȱ���� �ʱ�ȭ. �Ϲ������� ��������� �ʱ�ȭ �� �� �̴ϼȶ������� ��ȣ�Ѵ�. ���� const ��������� �ʱ�ȭ ����.
Rectangle::Rectangle(const int& x1, const int& y1, const int& x2, const int& y2) : upLeft(x1, y1), lowRight(x2, y2) 
{
	// empty
}

void Rectangle::ShowRecInfo() const
{
	cout << "�� ���: " << '[' << upLeft.GetX() << ", ";
	cout << upLeft.GetY() << ']' << endl;
	cout << "�� �ϴ�: " << '[' << lowRight.GetX() << ", ";
	cout << lowRight.GetY() << ']' << endl << endl;
}