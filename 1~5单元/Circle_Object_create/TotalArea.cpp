//#include<iostream>
//#include"Circle.h"
//
//using std::cout;
//
//int main_totalarea() {
//	Circle ca1[]{ Circle(1.0),Circle(2.0),Circle{3.0} };
//	Circle ca2[]{ 10.,11.0,12.0 };
//	//auto ca1_0[]{ Circle(1.0),Circle(2.0),Circle{3.0} };
//	ca1[2].setRadius(4.0);
//	ca2[1].setRadius(100.0);
//
//	auto area1{ 0.0 };
//	auto area2{ 0.0 };
//	for (int i = 0; i < static_cast<int>(sizeof(ca1) / sizeof(ca1[0])); i++) {
//		cout << ca1[i].getArea() << std::endl;
//		area1 += ca1[i].getArea();
//	}
//
//	for (auto x : ca2) {
//		cout << x.getArea() << std::endl;
//		area2 += x.getArea();
//	}
//	/*
//	3.14
//	12.56
//	50.24
//	314
//	31400
//	452.16
//	*/
//	cout << area1 << " " << area2 << std::endl;
//	//65.94 32166.2
//	return 0;
//}