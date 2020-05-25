#include<iostream>
#include"Circle.h"
using std::cout;
using std::endl;
#include"Circle.h"
int main_Circle() {
	Circle c1;
	Circle c2{ 2.0 };
	cout << c1.getArea() << endl;//3.14
	cout << c2.getArea() << endl;//12.56
	return 0;
}