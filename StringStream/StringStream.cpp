// StringStream.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
// Author : Sami Sezgin

#include <iostream>
#include <vector>
#include <string>
#include <sstream>

std::vector<int> parseInts(std::string str){
  std::vector<int> tempVec;
  std::stringstream ss(str);
  int value;
  char ch;
  while (ss >> value){
    tempVec . push_back(value);
    ss >> ch;
  }
  return tempVec;
}

int main(){
  std::string str;
  std::cin >> str;
  std::vector<int> integers = parseInts(str);
  for (int i = 0; i < integers . size(); i++){
    std::cout << integers[i] << "\n";
  }

  return 0;
}
