#include <iostream>

using namespace std;

#define ID_LEN		20
#define MAX_SPD	200
#define FUEL_STEP	2
#define ACC_STEP		10
#define BRK_STEP		10

struct Car
{
	char gamerID[ID_LEN];
	int fuelGauge;
	int curSpeed;
};

void ShowCarState(const Car& car)
{
	cout << "������ID : \t" << car.gamerID << endl;
	cout << "���ᷮ : \t" << car.fuelGauge << "%" << endl;
	cout << "����ӵ� : \t" << car.curSpeed << "km/h" << endl << endl;
}

void Accel(Car& car)
{
	if (car.fuelGauge <= 0) //���ᰡ ���� ���¿��� Accel �Ұ���
		return;
	else
		car.fuelGauge -= FUEL_STEP; //Accel ���� : ���� 2��ŭ �Ҹ�.

	if (car.curSpeed + ACC_STEP >= MAX_SPD) //�ִ�ӵ�����
	{
		car.curSpeed = MAX_SPD;
		return;
	}

	car.curSpeed += ACC_STEP; //����Ҹ� �� �ӵ� ACC_STEP ��ŭ ����
}

void Break(Car& car)
{
	if (car.curSpeed < BRK_STEP) //�ӵ��� BRK_STEP ���ϸ� 0���� ����
	{
		car.curSpeed = 0;
		return;
	}

	car.curSpeed -= BRK_STEP; //�� �ܿ� -BRK_STEP��ŭ �ӵ� ����
}

int main(void)
{
	Car run99 = { "run99", 100, 0 };
	Accel(run99);
	Accel(run99);
	ShowCarState(run99);
	Break(run99);
	ShowCarState(run99);

	Car sped77 = { "sped77", 100, 0 };
	Accel(sped77);
	Break(sped77);
	ShowCarState(sped77);
	return 0;
}