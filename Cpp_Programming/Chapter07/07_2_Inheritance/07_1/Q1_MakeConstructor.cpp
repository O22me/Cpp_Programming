#include <iostream>

using namespace std;

class Car
{
private:
	int gasolineGauge;
public:
	Car(int _gasolineGauge = 0) : gasolineGauge(_gasolineGauge)
	{
	}
	int GetGasGauge()
	{
		return gasolineGauge;
	}
};

class HybridCar : public Car
{
private:
	int electricGauge;
public:
	HybridCar(int _gasolingGauge = 0, int _electricGauge = 0) : Car(_gasolingGauge), electricGauge(_electricGauge)
	{
	}
	int GetElecGauge()
	{
		return electricGauge;
	}
};

class HybridWaterCar : public HybridCar
{
private:
	int waterGauge;
public:
	HybridWaterCar(int _gasolineGauge = 0, int _electricGauge = 0, int _waterGauge = 0)
		: HybridCar(_gasolineGauge, _electricGauge), waterGauge(_waterGauge)
	{
	}
	void ShowCurrentGauge()
	{
		cout << "ÀÜ¿© °¡¼Ö¸°: " << GetGasGauge() << endl;
		cout << "ÀÜ¿© Àü±â·®: " << GetElecGauge() << endl;
		cout << "ÀÜ¿© ¿öÅÍ·®: " << waterGauge << endl;
	}
};

int main(void)
{
	HybridWaterCar hwc1(100, 200, 300);
	hwc1.ShowCurrentGauge();
	cout << "ElecGauge : " << hwc1.GetElecGauge() << endl;
	cout << "GasolineGauge : " << hwc1.GetGasGauge() << endl;
	return 0;
}