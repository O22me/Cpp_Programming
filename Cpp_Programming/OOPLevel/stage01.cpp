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
	cout << "1. 계좌개설" << endl;
	cout << "2. 입 금" << endl;
	cout << "3. 출 금" << endl;
	cout << "4. 계좌정보 전체 출력" << endl;
	cout << "5. 프로그램 종료" << endl;
	cout << "선택: ";
}

void MakeNewAccout()
{
	Account new_account;
	cout << "[계좌개설]" << endl;
	cout << "계좌ID: ";	cin >> new_account.account_ID;
	cout << "이름: ";	cin >> new_account.name;
	cout << "입금액: ";	cin >> new_account.money;
	accountList[list_index] = new_account;
	list_index++;
}

void Deposit()
{
	int account_ID, money;
	cout << "[입    금]" << endl;
	cout << "계좌ID: ";	cin >>account_ID;
	for (int i = 0; i < list_index; i++)
	{
		if (accountList[i].account_ID == account_ID)
		{
			cout << "입금액: ";	cin >> money;
			accountList[i].money += money;
			cout << "입금완료" << endl;
			return;
		}
	}
	cout << "계좌정보 없음" << endl;
}

void Withdraw()
{
	int account_ID, money;
	cout << "[출    금]" << endl;
	cout << "계좌ID: ";	cin >> account_ID;
	for (int i = 0; i < list_index; i++)
	{
		if (accountList[i].account_ID == account_ID)
		{
			cout << "출금액: "; cin >> money;
			if (accountList[i].money < money) cout << "잔액부족(잔액: " << accountList[i].money << ")" << endl;
			else
			{
				accountList[i].money -= money;
				cout << "출금완료" << endl;
				return;
			}
		}
	}
	cout << "계좌정보 없음" << endl;
}

void PrintAllAccountInfo()
{
	for (int i = 0; i < list_index; i++)
	{
		cout << "계좌ID: " << accountList[i].account_ID << endl;
		cout << "이 름: " << accountList[i].name << endl;
		cout << "잔 액: " << accountList[i].money << endl << endl;
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
		default: cout << "잘못된 선택" << endl;
		}
	}
	return 0;
}