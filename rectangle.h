// Rectangle.h
class Rectangle {
  private:
    // Declare private attributes
    double width;
    double height;

  public:
    // Declare constructor with parameters
    Rectangle(double w, double h);

    // Declare member functions
    double getArea(); // Calculate and return the area of the rectangle
    double getPerimeter(); // Calculate and return the perimeter of the rectangle

    // Declare setters and getters for the attributes
    void setWidth(double w); // Set the width of the rectangle
    void setHeight(double h); // Set the height of the rectangle
    double getWidth(); // Get the width of the rectangle
    double getHeight(); // Get the height of the rectangle
};