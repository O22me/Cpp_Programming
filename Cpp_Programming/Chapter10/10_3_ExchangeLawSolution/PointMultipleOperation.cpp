#include <iostream>

using namespace std;

class Point
{
private:
	int xpos, ypos;
public:
	Point(int x = 0, int y = 0) : xpos(x), ypos(y)
	{
	}
	void ShowPosition() const
	{
		cout << '[' << xpos << ", " << ypos << ']' << endl;
	}
	Point operator*(int times)
	{
		Point pos(xpos * times, ypos * times);
		return pos;
	}
};

int main(void)
{
	Point pos(1, 2);
	Point cpy;

	cpy.ShowPosition();

	cpy = pos * 2; //pos.operator*(3) �� cpy�� �Է�
	cpy.ShowPosition();

	cpy = pos * 3 * 2; //pos.operator*(3).operator*(2) �� cpy�� �Է�
	cpy.ShowPosition();
	return 0;
}