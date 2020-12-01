#include <iostream>

using namespace std;

class Printer
{
private:
	char str[30];
public:
	void SetString(const char* str_input);
	void ShowString();
};

void Printer::SetString(const char* str_input)
{
	strcpy_s(str, 30, str_input);
}

void Printer::ShowString()
{
	cout << str << endl;
}

int main(void)
{
	Printer pnt;
	pnt.SetString("Hello world!");
	pnt.ShowString();

	pnt.SetString("I love C++");
	pnt.ShowString();
	return 0;
}