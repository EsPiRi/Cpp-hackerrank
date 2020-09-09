// Cpp Class Templates.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
// Author : Sami Sezgin

#include <iostream>
#include <iomanip>
#define concatenate add
#define endl '\n'
template <class T>
class AddElements
{
	T element;
public:
	explicit AddElements(T arg)
	{
		element = arg;
	}
	T add(T b) { return element + b; }
};
//-------IMPORTANT POINT-------//
int start_up() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	return 0;
}

int static r = start_up();
//-------IMPORTANT POINT-------//


int main() {
	int n, i;
	std::cin >> n;
	for (i = 0; i < n; i++) {
		std::string type;
		std::cin >> type;
		if (type == "float") {
			double element1, element2;
			std::cin >> element1 >> element2;
			AddElements<double> myfloat(element1);
			std::cout << myfloat.add(element2) << endl;
		}
		else if (type == "int") {
			int element1, element2;
			std::cin >> element1 >> element2;
			AddElements<int> myint(element1);
			std::cout << myint.add(element2) << endl;
		}
		else if (type == "string") {
			std::string element1, element2;
			std::cin >> element1 >> element2;
			AddElements<std::string> mystring(element1);
			std::cout << mystring.concatenate(element2) << endl;
		}
	}
	return 0;
}
