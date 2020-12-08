#include <iostream>
#include <cstring>

using namespace std;

class MyFriendInfo
{
private:
	char* name;
	int age;
public:
	MyFriendInfo(const char* myname, int myage) : age(myage)
	{
		name = new char[strlen(myname) + 1];
		strcpy_s(name, strlen(myname) + 1, myname);
	}
	void ShowMyFriendInfo()
	{
		cout << "이름 : " << name << endl;
		cout << "나이 : " << age << endl;
	}
	~MyFriendInfo()
	{
		delete[] name;
	}
};

class MyFriendDetailInfo : public MyFriendInfo
{
private:
	char* addr;
	char* phone;
public:
	MyFriendDetailInfo(const char* myname, int myage, const char* myaddr, const char* myphone) : MyFriendInfo(myname, myage)
	{
		addr = new char[strlen(myaddr) + 1];
		strcpy_s(addr, strlen(myaddr) + 1, myaddr);
		phone = new char[strlen(myphone) + 1];
		strcpy_s(phone, strlen(myphone) + 1, myphone);
	}
	void ShowMyFriendDetailInfo()
	{
		ShowMyFriendInfo();
		cout << "주소 : " << addr << endl;
		cout << "전화 : " << phone << endl << endl;
	}
	~MyFriendDetailInfo()
	{
		delete[] addr;
		delete[] phone;
	}
};

int main(void)
{
	MyFriendDetailInfo man1("Kim", 24, "Daegu", "010-1234-5678");
	man1.ShowMyFriendInfo();
	man1.ShowMyFriendDetailInfo();
	return 0;
}