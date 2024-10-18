#pragma once

#include <iostream>
#include <cmath>
#include "shape.hpp"  // <1>

class Circle: public Shape  // <2>
{
  public:
    Circle(double r): Circle(0, 0, r) {}
    Circle(double, double, double);

    virtual void draw() const; 
    double getRadius() const { return radius; }
    bool containsPoint(double, double) const;
    double area() const { return M_PI * radius * radius; }
    double perimeter() const { return 2.0 * M_PI * radius; }

  private:
    double radius;
};