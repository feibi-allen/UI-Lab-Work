#include <stdexcept>
#include <iostream>
#include "rect.hpp"

Rectangle::Rectangle(double x, double y, double w, double h):Shape(x,y),width(w),height(h){
    if (width <=0.0 or height <= 0.0){
        throw std::invalid_argument("Width and height must be > 0.");
    }
}

void Rectangle::draw() const
{
  std::cout << "Drawing Rectangle("
  << "x=" << getX()
  << ",y=" << getY()
  << ",width=" << getWidth()
  << ",height=" << getHeight()
  << ")" << std::endl;
}