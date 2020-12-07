#include <iostream>
#include <cstring>
using namespace std;

namespace COMP_POS
{
	enum
	{
		CLERK = 0,
		SENIOR = 1,
		ASSIST = 2,
		MANAGER = 3
	};
	void ShowPositionInfo(int position)
	{
		switch (position)
		{
		case 0: cout << "����: " << "���" << endl; break;
		case 1: cout << "����: " << "����" << endl; break;
		case 2: cout << "����: " << "�븮" << endl; break;
		case 3: cout << "����: " << "����" << endl; break;
		default: cout << "�� �� ����" << endl;
		}
	}
}

class NameCard
{
private:
	char* name;
	char* company_name;
	char* phone_num;
	int position;
public:
	NameCard(const char* _name, const char* _company_name, const char* _phone_num, int _position)
		: position(_position)
	{
		name = new char[strlen(_name) + 1];
		company_name = new char[strlen(_company_name) + 1];
		phone_num = new char[strlen(_phone_num) + 1];
		strcpy_s(name, strlen(_name) + 1, _name);
		strcpy_s(company_name, strlen(_company_name) + 1, _company_name);
		strcpy_s(phone_num, strlen(_phone_num) + 1, _phone_num);
	}
	NameCard(const NameCard& copy) : position(copy.position)
	{
		name = new char[strlen(copy.name) + 1];
		strcpy_s(name, strlen(copy.name) + 1, copy.name);
		company_name = new char[strlen(copy.company_name) + 1];
		strcpy_s(company_name, strlen(copy.company_name) + 1, copy.company_name);
		phone_num = new char[strlen(copy.phone_num) + 1];
		strcpy_s(phone_num, strlen(copy.phone_num) + 1, copy.phone_num);
	}
	void ShowNameCardInfo()
	{
		cout << "�̸�: " << name << endl;
		cout << "ȸ��: " << company_name << endl;
		cout << "��ȭ��ȣ: " << phone_num << endl;
		COMP_POS::ShowPositionInfo(position);
		cout << endl;
	}
	~NameCard()
	{
		delete[] name;
		delete[] company_name;
		delete[] phone_num;
	}
};

int main(void)
{
	NameCard manClerk("Lee", "ABCEng", "010-1111-2222", COMP_POS::CLERK);
	NameCard copy1 = manClerk;
	NameCard manSENIOR("Hong", "OrangeEng", "010-3333-4444", COMP_POS::SENIOR);
	NameCard copy2 = manSENIOR;
	copy1.ShowNameCardInfo();
	copy2.ShowNameCardInfo();
	return 0;
}