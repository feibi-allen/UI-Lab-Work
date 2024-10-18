#include <iostream>
#include <vector>
#include "rect.hpp"
#include "circle2.hpp"
using namespace std;


int main(){
    try
    {
        vector<Shape*> shapes;
        shapes.push_back(new Rectangle(1,4,6,7));
        shapes.push_back(new Rectangle(1,9));
        shapes.push_back(new Circle(1,4,7));
        shapes.push_back(new Circle(4));

        for (Shape* s: shapes){
            s->draw();
        }
    }
    catch(const std::invalid_argument& e)
    {
        std::cerr << "Error: " << e.what() << '\n';
        return 1;
    }

    return 0;
}
