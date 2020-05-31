#include<iostream>
#include<string>
#include"Shape.h"
#include"Circle.h"
#include"Rectangle.h"
using std::cout;
using std::endl;

int main() {
	Shape s1{ Color::blue,false };
	Circle c1{ 3.9,Color::green,true };
	Rectangle r1{ 4.0,1.0,Color::white,true };

	cout << s1.toString() << endl;
	cout << c1.toString() << endl;
	cout << r1.toString() << endl;

	cout << "c1 area: " << c1.getArea() << endl;
	cout << "r1 area: " << r1.getArea() << endl;
	/*
	1Shape: blue not filled
	Circle: radius3.900000,green filled
	Rectangle: width4.000000 , height 1.000000 , white filled
	c1 area: 3.9
	r1 area: 4
*/

	return 0;
}