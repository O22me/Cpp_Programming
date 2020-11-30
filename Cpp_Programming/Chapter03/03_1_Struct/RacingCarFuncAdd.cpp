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

	void ShowCarState()
	{
		cout << "������ID : \t" << gamerID << endl;
		cout << "���ᷮ : \t" << fuelGauge << "%" << endl;
		cout << "����ӵ� : \t" << curSpeed << "km/h" << endl << endl;
	}

	void Accel()
	{
		if (fuelGauge <= 0) //���ᰡ ���� ���¿��� Accel �Ұ���
			return;
		else
			fuelGauge -= FUEL_STEP; //Accel ���� : ���� 2��ŭ �Ҹ�.

		if (curSpeed + ACC_STEP >= MAX_SPD) //�ִ�ӵ�����
		{
			curSpeed = MAX_SPD;
			return;
		}

		curSpeed += ACC_STEP; //����Ҹ� �� �ӵ� ACC_STEP ��ŭ ����
	}

	void Break()
	{
		if (curSpeed < BRK_STEP) //�ӵ��� BRK_STEP ���ϸ� 0���� ����
		{
			curSpeed = 0;
			return;
		}

		curSpeed -= BRK_STEP; //�� �ܿ� -BRK_STEP��ŭ �ӵ� ����
	}
};

int main(void)
{
	Car run99 = { "run99", 100, 0 };
	run99.Accel();
	run99.Accel();
	run99.ShowCarState();
	run99.Break();
	run99.ShowCarState();

	Car sped77 = { "sped77", 100, 0 };
	sped77.Accel();
	sped77.Break();
	sped77.ShowCarState();
	return 0;
}