// Kalkulator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

int main()
{
	double y;
	std::string line = "";
	std::string line2 = "";
	double sum;
	bool end = false;
	std::cout << "Skriv inn et nummer: ";
	std::cin >> sum;
	while (end != true)
	{
		std::cout << "Skriv inn en operator (+ - * /): ";
		std::cin >> line;
		std::cout << "Skriv inn et nummer: ";
		std::cin >> y;
		if (line == "+")
		{
			sum = sum + y;
		}
		else if (line == "-")
		{
			sum = sum - y;
		}
		else if (line == "*")
		{
			sum = sum * y;
		}
		else if (line == "/")
		{
			sum = sum / y;
		}
		else
		{
			std::cout << "Skriv inn en akseptert operator neste gang!" << std::endl;
		};
		std::cout << "Den totale summen er: " << sum << std::endl;
		std::cout << "Vil du fortsette? Skriv \"y\" hvis du vil fortsette eller \"n\" hvis du er ferdig:" << std::endl;
		std::cout << "Hvis du vil slette summen din, skriv \"s\". Dette vil slette summen din og starte programmet på nytt." << std::endl;
		std::cin >> line2;
		if (line2 == "n")
		{
			end = true;
		}
		else if (line2 == "s")
		{
			std::cout << "Skriv inn et nummer: ";
			std::cin >> sum;
		}
		else
		{
			std::cout << "Programmet vil nå fortsette" << std::endl;
		}

	}
    return 0;
}
