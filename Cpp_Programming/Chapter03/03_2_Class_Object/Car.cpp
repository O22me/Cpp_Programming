#include <iostream>
#include <cstring>
#include "Car.h"

using namespace std;

void Car::InitMembers(const char* ID, int fuel)
{
	strcpy_s(gamerID, CAR_CONST::ID_LEN, ID);
	fuelGauge = fuel;
	curSpeed = 0;
}

void Car::ShowCarState() //inline 으로 명시적으로 지시한 경우
{
	cout << "소유자ID : " << gamerID << endl;
	cout << "연료량 : " << fuelGauge << "%" << endl;
	cout << "현재속도 : " << curSpeed << "km/s" << endl << endl;
}

void Car::Accel()
{
	if (fuelGauge <= 0)
		return;
	else
		fuelGauge -= CAR_CONST::FUEL_STEP;

	if ((curSpeed + CAR_CONST::ACC_STEP) >= CAR_CONST::MAX_SPD)
	{
		curSpeed = CAR_CONST::MAX_SPD;
		return;
	}

	curSpeed += CAR_CONST::ACC_STEP;
}

void Car::Break()
{
	if (curSpeed < CAR_CONST::BRK_STEP)
	{
		curSpeed = 0;
		return;
	}

	curSpeed -= CAR_CONST::BRK_STEP;
}