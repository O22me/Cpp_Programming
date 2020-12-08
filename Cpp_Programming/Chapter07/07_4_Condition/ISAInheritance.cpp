#include <iostream>
#include <cstring>

using namespace std;

class Computer
{
private:
	char owner[50];
public:
	Computer(const char* name)
	{
		strcpy_s(owner, strlen(name) + 1, name);
	}
	void Calculate()
	{
		cout << "��û ������ ����մϴ�." << endl;
	}
};

class Laptop : public Computer
{
private:
	int Battery;
public:
	Laptop(const char* name, int initChag) : Computer(name), Battery(initChag)
	{
	}
	void Charging() { Battery += 5; }
	void UseBattery() { Battery -= 1; }
	void MovingCal()
	{
		if (GetBatteryInfo() < 1)
		{
			cout << "������ �ʿ��մϴ�." << endl;
			return;
		}
		cout << "�̵��ϸ鼭 ";
		Calculate();
		UseBattery();
	}
	int GetBatteryInfo() { return Battery; }
};

class Tablet : public Laptop
{
private:
	char regstPenModel[50];
public:
	Tablet(const char* name, int initChag, const char* pen)
		: Laptop(name, initChag)
	{
		strcpy_s(regstPenModel, strlen(pen) + 1, pen);
	}
	void Write(const char* penInfo)
	{
		if (GetBatteryInfo() < 1)
		{
			cout << "������ �ʿ��մϴ�." << endl;
			return;
		}
		if (strcmp(regstPenModel, penInfo) != 0)
		{
			cout << "��ϵ� ���� �ƴմϴ�.";
			return;
		}
		cout << "�ʱ� ������ ó���մϴ�." << endl;
		UseBattery();
	}
};

int main(void)
{
	Laptop lp("�̼���", 5);
	Tablet tl("������", 5, "ISE-241-242");
	lp.MovingCal();
	tl.Write("ISE-241-242");
	return 0;
}