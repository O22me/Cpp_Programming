#include <iostream>

using namespace std;

class SoSimple
{
private:
	int num1, num2;
public:
	SoSimple(int n1, int n2) : num1(n1), num2(n2)
	{
	}
	explicit SoSimple(const SoSimple& copy) : num1(copy.num1), num2(copy.num2) //복사생성자
	{
		cout << "Called SoSimple(SoSimple& copy)" << endl;
	}
	void ShowSimpleData()
	{
		cout << num1 << endl;
		cout << num2 << endl;
	}
};

int main(void)
{
	SoSimple sim1(15, 30);
	cout << "생성 및 초기화 직전" << endl;
	//SoSimple sim2 = sim1; //SoSimple sim2(sim1); 으로 변환...[제한됨]
	//생성자에 explicit 키워드를 이용해 묵시적 변환을 제한하였다.
	SoSimple sim2(sim1);
	cout << "생성 및 초기화 직후" << endl;
	sim2.ShowSimpleData();
	return 0;
}