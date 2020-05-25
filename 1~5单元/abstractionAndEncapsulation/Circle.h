#pragma once

class Circle {
	
public:
	Circle();
	Circle(double radius_);

private:
	double radius;

public:
    double getRadius() const;
    void setRadius(double radius);
	Circle setRadiusObject(double radius);
	double getArea();
};