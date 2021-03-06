// output.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>


int main()
{
	std::cout.imbue(std::locale("en-us"));
	std::cout.setf(std::ios::right);
	std::cout.setf(std::ios::fixed);
	std::cout.precision(2);
	std::cout.showpoint;


	double moneyw = 36364.87f;
	double moneym = 12431.33f;
	double moneye = 127690.50f;
	double moneys = 9200.00f;

	std::cout << std::setw(10) << "West:" << std::setw(10) << "$" << std::setw(15) << moneyw << std::endl;
	std::cout << std::setw(10) << "Midwest:" << std::setw(10) << "$" << std::setw(15) << moneym << std::endl;
	std::cout << std::setw(10) << "East:" << std::setw(10) << "$" << std::setw(15)  << moneye << std::endl;
	std::cout << std::setw(10) << "South:" << std::setw(10) << "$" << std::setw(15) << moneys << std::endl;


    return 0;
}

