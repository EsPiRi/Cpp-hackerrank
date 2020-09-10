// RectangleArea.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
// Author : Sami Sezgin

#include <iostream>
#define endl "\n"

class Rectangle{
  public:
    int width;
    int height;

    void display(){
      std::cout << width << " " << height << endl;
    }
};

class RectangleArea : public Rectangle{
  public:
    void read_input(){
      std::cin >> width >> height;
    }

    void display(){
      std::cout << width * height << endl;
    }
};

int main(){
  /*
   * Declare a RectangleArea object
   */
  RectangleArea r_area;

  /*
   * Read the width and height
   */
  r_area . read_input();

  /*
   * Print the width and height
   */
  r_area . Rectangle::display();

  /*
   * Print the area
   */
  r_area . display();

  return 0;
}
