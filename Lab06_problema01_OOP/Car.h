#pragma once



class Car
{
private:
	unsigned fuel_capacity;
	unsigned fuel_consuption;
	unsigned average_sunny;
	unsigned average_rain;
	unsigned average_snow;

public:
	virtual void SetFuelCapacity(unsigned x);
	virtual void SetFuelConsuption(unsigned y);
	virtual void SetAverageSunny(unsigned z);
	virtual void SetAverageRain(unsigned t);
	virtual void SetAverageSnow(unsigned r);
};