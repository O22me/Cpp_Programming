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
		cout << "소유자ID : \t" << gamerID << endl;
		cout << "연료량 : \t" << fuelGauge << "%" << endl;
		cout << "현재속도 : \t" << curSpeed << "km/h" << endl << endl;
	}

	void Accel()
	{
		if (fuelGauge <= 0) //연료가 없는 상태에서 Accel 불가능
			return;
		else
			fuelGauge -= FUEL_STEP; //Accel 가능 : 연료 2만큼 소모.

		if (curSpeed + ACC_STEP >= MAX_SPD) //최대속도제한
		{
			curSpeed = MAX_SPD;
			return;
		}

		curSpeed += ACC_STEP; //연료소모 후 속도 ACC_STEP 만큼 증가
	}

	void Break()
	{
		if (curSpeed < BRK_STEP) //속도가 BRK_STEP 이하면 0으로 세팅
		{
			curSpeed = 0;
			return;
		}

		curSpeed -= BRK_STEP; //그 외에 -BRK_STEP만큼 속도 감소
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