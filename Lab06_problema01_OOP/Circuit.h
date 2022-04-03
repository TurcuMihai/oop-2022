#pragma once
#include "Weather.h"
#include "Car.h"
class Circuit
{
private:
	unsigned lenght;
	Weather weather;


public:
	void SetLength(unsigned x);
	void SetWeather(Weather x);  /// ???
	void AddCar();
	void Race();
	void ShowFinalRanks();
	void ShowWhoDidNotFinish();

};