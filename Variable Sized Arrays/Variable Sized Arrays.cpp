// Variable Sized Arrays.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
#include <vector>

int main()
{
	int n, b, c, x;
	std::cin >> n >> b;
	std::vector<std::vector<int>> myArr(n);
	for (int i = 0; i < n; i++)
	{
		std::cin >> x;
		for (int j = 0; j < x; j++)
		{
			std::cin >> c;
			myArr[i].push_back(c);
			//std::cout << myArr[i][j];
		}
	}
	int f_index;
	int l_index;
	
	for (int k = 0; k < n; k++)
	{
		std::cin >> f_index >> l_index;
		std::cout << myArr[f_index][l_index] << std::endl;
	}
	

}

