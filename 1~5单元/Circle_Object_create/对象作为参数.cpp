/* Passing Objects to Functions
������Ϊ����

C++��������ĸ����Ǵ�ֵ�봫����
*/
#include<iostream>
#include"Circle1.h"
using std::cout;
using std::endl;

//void print(Circle c) {
//	cout << c.getArea() << endl;
//}

void print(Circle& c) {
	cout << c.getArea() << endl;
}

void print(Circle* c) {
	cout << c->getArea() << endl;
}

//int main() {
//	Circle ca[]{ 1.0,2.0,3.0 };
//	print(ca[0]);
//	print(ca[1]);
//	print(*(ca+2));
//	/*
//	3.14
//	12.56
//	28.26
//	*/
//	return 0;
//}

int main() {
	Circle c{ 1.0 };

	cout << c.setRadius(2.0).setRadius(3.0).getArea() << endl;

	return 0;
}
