// Basic Data Types.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
// Author : Sami Sezgin


#include <iomanip>
#include <iostream>

int main()
{
	int a;
	long long b;
	char c;
	float d;
	double e;

	std::cin >> a;
	std::cin >> b;
	std::cin >> c;
	std::cin >> d;
	std::cin >> e;

	std::cout << std::setprecision(10) << a << std::endl;
	std::cout << std::setprecision(10) << b << std::endl;
	std::cout << std::setprecision(10) << c << std::endl;
	std::cout << std::setprecision(10) << d << std::endl;
	std::cout << std::setprecision(10) << e << std::endl;
}

