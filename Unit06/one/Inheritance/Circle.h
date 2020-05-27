#pragma once
#include "Shape.h"

class Circle :public Shape
{
    double radius;

public:
    Circle();
    Circle(double radius_);
    double getArea();
    double getRadius() const;
    void setRadius(double radius);
};
