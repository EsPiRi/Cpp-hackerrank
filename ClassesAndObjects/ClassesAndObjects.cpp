// ClassesAndObjects.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
// Author : Sami Sezgin

#include <iostream>
#include <vector>

class Student{
  public:
    std::vector<int> scores;
    int temp;

    void input(){
      for (int i = 0; i < 5; i++){
        std::cin >> temp;
        scores . push_back(temp);
      }
    }

    int calculateTotalScore(){
      temp = 0;
      for (int i = 0; i < scores . size(); i++){
        temp += scores[i];
      }
      return temp;
    }
};

int main(){
  int n; // number of students
  std::cin >> n;
  Student* s = new Student[n]; // an array of n students

  for (int i = 0; i < n; i++){
    s[i] . input();
  }

  // calculate kristen's score
  int kristen_score = s[0] . calculateTotalScore();

  // determine how many students scored higher than kristen
  int count = 0;
  for (int i = 1; i < n; i++){
    int total = s[i] . calculateTotalScore();
    if (total > kristen_score){
      count++;
    }
  }

  // print result
  std::cout << count;

  return 0;
}
