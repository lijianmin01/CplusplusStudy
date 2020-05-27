#include<iostream>
#include"a.h"

a::a() {
	radius = 1.0;
}

a::a(double radius_) {
	radius = radius_;
}

double a::getArea() {
	return (3.14 * radius * radius);
}