#include <iostream>
#include "rect.hpp"

int main(){
    try
    {
        Rectangle rectA(1, 3, 5, 6);
        Rectangle rectB(4, 5, -1, 2);  // This should trigger the exception
        std::cout << "Rect A: " 
                  << "Width = " << rectA.getWidth() 
                  << ", Height = " << rectA.getHeight()
                  << ", X = " << rectA.getX() 
                  << ", Y = " << rectA.getY() << std::endl;
                  
        std::cout << "Rect B: " 
                  << "Width = " << rectB.getWidth() 
                  << ", Height = " << rectB.getHeight()
                  << ", X = " << rectB.getX() 
                  << ", Y = " << rectB.getY() << std::endl;
    }
    catch(const std::invalid_argument& e)
    {
        std::cerr << "Error: " << e.what() << '\n';
        return 1;
    }

    return 0;
}
