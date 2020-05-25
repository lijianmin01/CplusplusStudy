//#include<iostream>
//using std::cout;
//using std::endl;
//
//class Circle {
//	double radius;
//public:
//	Circle();
//	Circle(double radius_);
//	double getArea();
//};
//
//Circle::Circle() {
//	radius = 1.0;
//}
//
//Circle::Circle(double radius_) {
//	radius = radius_;
//}
//
//double Circle::getArea() {
//	return (radius * radius * 3.14);
//}
//
//int main_Circle01() {
//	Circle c1;
//	Circle c2{ 2.0 };
//
//	cout << c1.getArea() << endl;//3.14
//	cout << c2.getArea() << endl;//12.56
//
//	return 0;
//}
//
///*
//	Circle() {
//		radius = 1.0;
//	}
//	Circle(double r) {
//		radius = r;
//	}
//	double getArea() {
//		return (radius * radius * 3.14);
//	}
//*/