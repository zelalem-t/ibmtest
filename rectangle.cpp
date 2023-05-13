// Rectangle.cpp
#include "Rectangle.h"

// Define constructor with parameters
Rectangle::Rectangle(double w, double h) {
  // Initialize attributes
  width = w;
  height = h;
}

// Define member function to calculate and return the area of the rectangle
double Rectangle::getArea() {
  return width * height;
}

// Define member function to calculate and return the perimeter of the rectangle
double Rectangle::getPerimeter() {
  return 2 * (width + height);
}

// Define setter for the width of the rectangle
void Rectangle::setWidth(double w) {
  width = w;
}

// Define setter for the height of the rectangle
void Rectangle::setHeight(double h) {
  height = h;
}

// Define getter for the width of the rectangle
double Rectangle::getWidth() {
  return width;
}

// Define getter for the height of the rectangle
double Rectangle::getHeight() {
  return height;
}
