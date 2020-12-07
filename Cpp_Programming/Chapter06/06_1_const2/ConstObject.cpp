#include <iostream>

using namespace std;

class SoSimple
{
private:
	int num;
public:
	SoSimple(int n) : num(n)
	{
	}
	SoSimple& AddNum(int n)
	{
		num += n;
		return *this;
	}
	void ShowData() const //const 객체는 이 함수만 호출가능하다.
	{
		cout << "num: " << num << endl;
	}
};

int main(void)
{
	const SoSimple obj(7);
	// obj.AddNum(20);
	obj.ShowData();
	return 0;
}