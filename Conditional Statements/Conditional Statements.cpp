// Conditional Statements.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
// Author : Sami Sezgin

#include <iostream>

int main()
{
	int a;
	std::cin >> a;
	if (a == 1)
		std::cout << "one";
	else if (a == 2)
		std::cout << "two";
	else if (a == 3)
		std::cout << "three";
	else if (a == 4)
		std::cout << "four";
	else if (a == 5)
		std::cout << "five";
	else if (a == 6)
		std::cout << "six";
	else if (a == 7)
		std::cout << "seven";
	else if (a == 8)
		std::cout << "eight";
	else if (a == 9)
		std::cout << "nine";
	else if (a > 9)
		std::cout << "Greater than 9";
}

