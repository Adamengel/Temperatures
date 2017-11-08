#include <iostream>
#include "temperatures.h"

using namespace std;
int main()
{
	Celsius celc(100);
	Fahrenheit fahr(212);

	cout << celc <<endl;
	cout << fahr << endl;
	cout << static_cast<Fahrenheit>(celc) << endl;
	cout << static_cast<Celsius>(fahr) << endl;
	static_cast<Celsius>(fahr).printCommonTemps();
	fahr.printCommonTemps();


	system("pause");
	return 0;
}