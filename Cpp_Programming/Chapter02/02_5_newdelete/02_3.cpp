#include <iostream>
#include <stdlib.h>

using namespace std;

typedef struct _Point {
	int xPos;
	int yPos;
}Point;

Point& pntAdder(const Point& p1, const Point& p2) //������ ����1(�Լ��� ����)
{
	Point* Addresult = new Point;
	Addresult->xPos = p1.xPos + p2.xPos;
	Addresult->yPos = p1.yPos + p2.yPos;
	return *Addresult;
}

int main(void)
{
	Point* p1 = new Point;
	Point* p2 = new Point;

	//(1, 2)�� (3, 1)��ǥ�� ����
	p1->xPos = 1;
	p1->yPos = 2;
	p2->xPos = 3;
	p2->yPos = 1;

	Point& result = pntAdder(*p1, *p2);

	cout << "Result.xPos : " << result.xPos << endl;
	cout << "Result.yPos : " << result.yPos << endl;

	//������ ����2(�޸� �Ҹ�ö��)
	delete& result;
	delete p1;
	delete p2;
	return 0;
}