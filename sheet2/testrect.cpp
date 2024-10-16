#include <iostream>
#include "rect.hpp"

int main(){
    Rectangle rectA(1,3,5,6);
    Rectangle rectB(4,3);

    std::cout << "Rect A:" << rectA.getWidth() << rectA.getHeight() << rectA.getX() << rectA.getY() << std::endl;
    std::cout << "Rect B:" << rectB.getWidth() << rectB.getHeight() << rectB.getX() << rectB.getY() << std::endl;

    return 0;
}