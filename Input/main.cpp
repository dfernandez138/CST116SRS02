// output.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>


int main()
{
	std::cout.imbue(std::locale("en-us"));
	std::cout.setf(std::ios::scientific);
	
	double number;

	std::cout << "Enter a number: ";
	std::cin >> number;
	std::cout << std::scientific << number;
	

    return 0;
}

