// main.cpp
#include <iostream>
#include "Rectangle.cpp"

using namespace std;

int main() {
  // Create a rectangle object with width 5 and height 10
  Rectangle r1(5, 10);

  // Print the area and perimeter of the rectangle
  cout << "The area of the rectangle is " << r1.getArea() << endl;
  cout << "The perimeter of the rectangle is " << r1.getPerimeter() << endl;

  return 0;
}
