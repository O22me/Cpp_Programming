#include <iostream>
#include <cstring>

using namespace std;

class Person
{
private:
	char* name;
	int age;
public:
	Person(const char* myname, int myage)
	{
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy_s(name, len, myname);
		age = myage;
	}
	Person()
	{
		name = NULL;
		age = 0;
		cout << "called Person()" << endl;
	}
	void SetPersonInfo(const char* myname, int myage)
	{
		delete name;
		name = new char[strlen(myname) + 1];
		strcpy_s(name, strlen(myname) + 1, myname);
		age = myage;
	}
	void ShowPersonInfo() const
	{
		cout << "�̸�: " << name << ", ";
		cout << "����: " << age << endl;
	}
	~Person()
	{
		delete[] name;
		cout << "called destructor1" << endl;
	}
};

int main(void)
{
	Person* parr[3];
	char namestr[100];
	int age;

	for (int i = 0; i < 3; i++)
	{
		cout << "�̸�: ";
		cin >> namestr;
		cout << "����: ";
		cin >> age;
		parr[i] = new Person(namestr, age);
	}
	parr[0]->ShowPersonInfo();
	parr[1]->ShowPersonInfo();
	parr[2]->ShowPersonInfo();
	delete parr[0];
	delete parr[1];
	delete parr[2];
	return 0;
}