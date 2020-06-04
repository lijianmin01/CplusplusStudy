
#pragma once
#include"Shape.h"

class Circle : public Shape
{
	double radius;
public:
	Circle();
	Circle(double radius, Color color_, bool filled_);

	double getArea() override;
	double getRadius() const;
	void setRadius(double radius);

	string toString();
};

