#include <iostream>
#include <cstring>

using namespace std;

class First
{
private:
	char* strOne;
public:
	First(const char* str)
	{
		strOne = new char[strlen(str) + 1];
	}
	virtual ~First() //��ӵǴ� Ŭ������ �����ϰ� �����Ҵ��� ��� virtual�� ���� ����Ŭ������ �������� �����ϵ���.
	{
		cout << "~First()" << endl;
		delete[] strOne;
	}
};

class Second : public First
{
private:
	char* strTwo;
public:
	Second(const char* str1, const char* str2) : First(str1)
	{
		strTwo = new char[strlen(str2) + 1];
	}
	~Second()
	{
		cout << "~Second()" << endl;
		delete[] strTwo;
	}
};

int main(void)
{
	First* ptr = new Second("Simple", "Complex");
	delete ptr;
	return 0;
}