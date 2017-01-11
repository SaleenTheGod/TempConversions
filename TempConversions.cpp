#include "TempConversions.h"

double TempConversions::fahToCel(double Fahrenheit)
{
	 // T(°C) = (T(°F) - 32) / 1.8

	double temp = 0;


	temp = (Fahrenheit - 32) / 1.8;

	return temp;
}

double TempConversions::celToFah(double Celsius)
{
	// T(°F) = T(°C) × 1.8 + 32

	double temp = 0;

	temp = Celsius * 1.8 + 32;

	return temp;
}

double TempConversions::fahToKelvin(double Fahrenheit)
{
	// 	T(K) = (T(°F) + 459.67) × 5/9

	double temp = 0;

	temp = (Fahrenheit + 459.67) * 5 / 9;

	return temp;
}

double TempConversions::kelvinToFah(double kelvin)
{
	// T(°F) = T(K) × 9/5 - 459.67

	double temp = 0;

	temp = kelvin * 9 / 5 - 495.67;

	return temp;
}

double TempConversions::celToKelvin(double Celsius)
{
	// T(K) = T(°C) + 273.15

	double temp = 0;

	temp = Celsius + 273.15;

	return temp;
}

double TempConversions::kelvinToCel(double kelvin)
{
	// T(°C) = T(K) - 273.15

	double temp = 0;

	temp = kelvin - 273.15;

	return temp;
}
