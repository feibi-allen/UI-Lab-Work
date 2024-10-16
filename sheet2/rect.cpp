#include <stdexcept>
#include "rect.hpp"

Rectangle::Rectangle(double x, double y, double w, double h):xorigin(x),yorigin(y),width(w),height(h){
    if (width <=0.0 or height <= 0.0){
        throw std::invalid_argument("Width and height must be > 0.");
    }
}