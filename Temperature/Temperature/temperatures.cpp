#include "temperatures.h"

	Celsius::Celsius()
	{	}
	Celsius::Celsius(float tmp)
	{
		setTemperature(tmp);
	}

	void Celsius::setTemperature(float tmp)
	{
		temperature = tmp;
	}
	float Celsius::getTemperature() const
	{
		return temperature;
	}
	void Celsius::printCommonTemps() const
	{
		std::cout << "Boiling Temp: 100C\nFreezing Temp: 0C\nAbsolute Zero: 273.15C" << std::endl;
	}
	Celsius::operator Fahrenheit()
	{
		return Fahrenheit(temperature*1.8 + 32);
	}
	std::ostream& operator<<(std::ostream& os, const Celsius& cel)
	{
		os << cel.temperature<<" degrees C";
		return os;
	}


	Fahrenheit::Fahrenheit()
	{}
	Fahrenheit::Fahrenheit(float tmp)
	{
		setTemperature(tmp);
	}

	void Fahrenheit::setTemperature(float tmp)
	{
		temperature = tmp;
	}
	float Fahrenheit::getTemperature() const
	{
		return temperature;
	}
	void Fahrenheit::printCommonTemps() const
	{
		std::cout << "Boiling Temp: 212F\nFreezing Temp: 32F\nAbsolute Zero: 459.67F" << std::endl;
	}
	Fahrenheit::operator Celsius()
	{
		return Celsius((temperature-32) / 1.8);
	}
	std::ostream& operator<<(std::ostream& os, const Fahrenheit& fahr)
	{
		os << fahr.temperature << " degrees F";
		return os;
	}
