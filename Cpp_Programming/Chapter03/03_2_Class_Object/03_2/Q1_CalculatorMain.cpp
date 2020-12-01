#include <iostream>
#include <cstring>

using namespace std;

class Calculator
{
private:
	int plus_cnt;
	int minus_cnt;
	int multiple_cnt;
	int divide_cnt;
public:
	void Init();
	double Add(double a, double b);
	double Min(double a, double b);
	double Mul(double a, double b);
	double Div(double a, double b);
	void ShowOpCount();
};

void Calculator::Init()
{
	plus_cnt = 0;
	minus_cnt = 0;
	multiple_cnt = 0;
	divide_cnt = 0;
}

double Calculator::Add(double a, double b)
{
	plus_cnt++;
	return a + b;
}

double Calculator::Min(double a, double b)
{
	minus_cnt++;
	return a - b;
}

double Calculator::Mul(double a, double b)
{
	multiple_cnt++;
	return a * b;
}

double Calculator::Div(double a, double b)
{
	divide_cnt++;
	return a / b;
}

void Calculator::ShowOpCount()
{
	cout << "µ¡¼À: " << plus_cnt << " »¬¼À: " << minus_cnt << " °ö¼À: " << multiple_cnt << " ³ª´°¼À: " << divide_cnt << endl;
}

int main(void)
{
	Calculator cal;
	cal.Init();
	cout << "3.2 + 2.4 = " << cal.Add(3.2, 2.4) << endl;
	cout << "3.5 / 1.7 = " << cal.Div(3.5, 1.7) << endl;
	cout << "2.2 - 1.5 = " << cal.Min(2.2, 1.5) << endl;
	cout << "4.9 / 1.2 = " << cal.Div(4.9, 1.2) << endl;
	cal.ShowOpCount();
	return 0;
}