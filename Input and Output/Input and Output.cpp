// Input and Output.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
// Author : Sami Sezgin

#include <iostream>

int main()
{
	int a, b, c, sum;
	//std::cout << "Enter 3 numbers to add them: ";
	std::cin >> a >> b >> c;
	sum = a + b + c;
	std::cout << sum;
}

