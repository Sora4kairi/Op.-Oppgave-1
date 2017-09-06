// Kalkulator20.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{

	std::string in = "";
	std::cout << "Skriv inn et uttrykk" << std::endl;
	std::cin >> in;
	std::cout << in << std::endl;
	int sum = 0;
	int numbers[10] = { 0,1,2,3,4,5,6,7,8,9 };
	std::cout << in.length() << endl;
	int length = in.length();
	for (int i = 0; i < length; i++)
	{
			sum = sum + in[0];
			in.erase(0);
	}
	std::cout << sum << std::endl;
    return 0;
}

