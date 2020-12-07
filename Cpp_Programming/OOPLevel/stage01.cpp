#include <iostream>
#include <cstring>
#include <list>

using namespace std;

typedef struct
{
	unsigned int money;
	unsigned int account_ID;
	char name[30];
}Account;

enum
{
	MAKE = 1,
	DEPOSIT, WITHDRAW, PRINTALL, EXIT
};
Account accountList[30];
int list_index = 0;

void PrintMenu()
{
	cout << "-----Menu------" << endl;
	cout << "1. ���°���" << endl;
	cout << "2. �� ��" << endl;
	cout << "3. �� ��" << endl;
	cout << "4. �������� ��ü ���" << endl;
	cout << "5. ���α׷� ����" << endl;
	cout << "����: ";
}

void MakeNewAccout()
{
	Account new_account;
	cout << "[���°���]" << endl;
	cout << "����ID: ";	cin >> new_account.account_ID;
	cout << "�̸�: ";	cin >> new_account.name;
	cout << "�Աݾ�: ";	cin >> new_account.money;
	accountList[list_index] = new_account;
	list_index++;
}

void Deposit()
{
	int account_ID, money;
	cout << "[��    ��]" << endl;
	cout << "����ID: ";	cin >>account_ID;
	for (int i = 0; i < list_index; i++)
	{
		if (accountList[i].account_ID == account_ID)
		{
			cout << "�Աݾ�: ";	cin >> money;
			accountList[i].money += money;
			cout << "�ԱݿϷ�" << endl;
			return;
		}
	}
	cout << "�������� ����" << endl;
}

void Withdraw()
{
	int account_ID, money;
	cout << "[��    ��]" << endl;
	cout << "����ID: ";	cin >> account_ID;
	for (int i = 0; i < list_index; i++)
	{
		if (accountList[i].account_ID == account_ID)
		{
			cout << "��ݾ�: "; cin >> money;
			if (accountList[i].money < money) cout << "�ܾ׺���(�ܾ�: " << accountList[i].money << ")" << endl;
			else
			{
				accountList[i].money -= money;
				cout << "��ݿϷ�" << endl;
				return;
			}
		}
	}
	cout << "�������� ����" << endl;
}

void PrintAllAccountInfo()
{
	for (int i = 0; i < list_index; i++)
	{
		cout << "����ID: " << accountList[i].account_ID << endl;
		cout << "�� ��: " << accountList[i].name << endl;
		cout << "�� ��: " << accountList[i].money << endl << endl;
	}
}

int main(void)
{
	bool exit_interupt = false;
	int input;
	while (!exit_interupt)
	{
		PrintMenu();
		cin >> input;
		cout << endl;
		switch (input)
		{
		case MAKE: MakeNewAccout(); break;
		case DEPOSIT: Deposit(); break;
		case WITHDRAW: Withdraw(); break;
		case PRINTALL: PrintAllAccountInfo(); break;
		case EXIT: exit_interupt = true; break;
		default: cout << "�߸��� ����" << endl;
		}
	}
	return 0;
}