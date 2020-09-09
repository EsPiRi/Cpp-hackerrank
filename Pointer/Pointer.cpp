// Pointer.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
// Author : Sami Sezgin

#include <iostream>

void update(int *a, int *b)
{
	int temp = *a;
	*a += *b;
	if (*b >= temp)
		*b -= temp;
	else
		*b = temp - *b;
}

int main()
{
    int a, b;
	std::cin >> a >> b;
	update(&a, &b);
	std::cout << a << std::endl << b << std::endl;
}

