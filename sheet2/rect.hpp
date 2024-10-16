#pragma once

class Rectangle{
    public:
        Rectangle(double w,double h): Rectangle(0,0,w,h) {}
        Rectangle(double x,double y,double w,double h);

        double getX() const {return xorigin;}
        double getY() const {return yorigin;}
        double getWidth() const {return width;}
        double getHeight() const {return height;}

        double perimeter() const {return 2*(height + width);}
        double area() const {return height*width;}
    private:
        double xorigin, yorigin, width, height;

};