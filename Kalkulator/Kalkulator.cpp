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
			std::cout << "Skriv inn en akseptert operator neste gang!";
		};
		std::cout << "Summen er: " << sum << std::endl;
		std::cout << "Vil du fortsette? Skriv \"y\" hvis du vil fortsette eller \"n\" hvis du er ferdig:" << std::endl;
		std::cin >> line2;
		if (line2 == "n") 
		{
			end = true;
		}
	}
    return 0;
}

