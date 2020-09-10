// Strings.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
// Author : Sami Sezgin

#include <iostream>
#define endl "\n"

int main(){
  std::string a, b;
  char temp;
  std::cin >> a >> b;
  std::cout << a . size() << " " << b . size() << endl;
  std::cout << a + b << endl;
  temp = a[0];
  a[0] = b[0];
  b[0] = temp;
  std::cout << a << " " << b << endl;
}
