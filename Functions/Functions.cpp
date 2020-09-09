// Functions.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
// Author : Sami Sezgin

#include <iostream>

int max_of_four(int a, int b, int c, int d)
{
	int max = -1;
	max = (max < a) ? a : max;
	max = (max < b) ? b : max;
	max = (max < c) ? c : max;
	max = (max < d) ? d : max;
	return max;
}
int main()
{
	int a, b, c, d;
	std::cin >> a >> b >> c >> d;
	int ans = max_of_four(a, b, c, d);
	std::cout << ans;
	
	return 0;
}
