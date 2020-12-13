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
	virtual ~First() //상속되는 클래스가 존재하고 동적할당인 경우 virtual을 통해 유도클래스도 정상해제 가능하도록.
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