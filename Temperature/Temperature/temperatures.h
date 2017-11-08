#pragma once
#include <iostream>

class Fahrenheit;
class Celsius
{
public:
	Celsius();
	Celsius(float tmp);
	
	void setTemperature(float tmp);
	float getTemperature() const;
	void printCommonTemps() const;
	operator Fahrenheit ();
	friend std::ostream& operator<<(std::ostream& os, const Celsius& cel);

private:
	float temperature;
};

class Fahrenheit
{
public:
	Fahrenheit();
	Fahrenheit(float tmp);

	void setTemperature(float tmp);
	float getTemperature() const;
	void printCommonTemps() const;
	operator Celsius ();
	friend std::ostream& operator<<(std::ostream& os, const Fahrenheit& cel);

private:
	float temperature;
};