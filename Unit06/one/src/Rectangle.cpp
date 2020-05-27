#include"Rectangle.h"

Rectangle::Rectangle(double w,double h):width{w},height{h}{

}

double Rectangle::getWidth() const{return width;}
void Rectangle::setWidth(double w){width=w;}
double Rectangle::getHeight() const{return height;}
void Rectangle::setHeight(double h){height=h;}

double Rectangle::getArea() const{
    return width*height;
}
