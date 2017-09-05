// Kalkulator20.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int main()
{
	float num1, num2; //Variabler, float for å regne med desimaltall
	char operation; //bruker for å lagre operator
	char op[] = { "+" "-" "*" "/" }; 
	std::cout << "Skriv inn to tall med en operator (+ - * /) imellom>" << std::endl;
	std::cin >> num1 >> operation >> num2; //Bruker iostream til å ta inn en float, deretter en operatør, og til slutt en float til.
	if (operation == op[0])
	{
		std::cout << num1 + num2 << std::endl; 
	}
	else if (operation == op[1])
	{
		std::cout << num1 - num2 << std::endl; 
	}
	else if (operation == op[2])
	{
		std::cout << num1*num2 << std::endl; 
	}
	else if (operation == op[3])
	{
		std::cout << num1 / num2 << std::endl; 
	}
	else
	{
		std::cout << "Det var en feil i inputtet. Vennligst kontroller og skriv inn på rett måte neste gang." << std::endl; //I tilfelle brukeren skriver inn noe annet enn godkjente operatorer
	}
	return 0;
}

