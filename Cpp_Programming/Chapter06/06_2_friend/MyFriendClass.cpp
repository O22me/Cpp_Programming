#include <iostream>
#include <cstring>

using namespace std;

class Girl; //없어도 14행이 Girl 이 class임을 확인한다.

class Boy
{
private:
	int height;
	friend class Girl;
public:
	Boy(int len) : height(len)
	{
	}
	void ShowYourFriendInfo(Girl& frn);
};

class Girl
{
private:
	char phNum[20];
public:
	Girl(const char* num)
	{
		strcpy_s(phNum, strlen(num) + 1, num);
	}
	void ShowYourFriendInfo(Boy& frn);
	friend class Boy;
};

void Boy::ShowYourFriendInfo(Girl& frn)
{
	cout << "Her phone number: " << frn.phNum << endl;
}

void Girl::ShowYourFriendInfo(Boy& frn)
{
	cout << "His height: " << frn.height << endl;
}

int main(void)
{
	Boy boy(170);
	Girl girl("010-1111-2222");
	boy.ShowYourFriendInfo(girl);
	girl.ShowYourFriendInfo(boy);
	return 0;
}