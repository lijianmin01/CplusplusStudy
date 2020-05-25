#include<iostream>
#include"Circle.h"

using std::cout, std::endl;

int main() {
	auto* c1 = new Circle{ 1.0 };
	Circle c3{ 2.0 };
	auto c2 = &c3;

	cout << (*c1).getArea() << endl;
	cout << c2->getArea() << endl;

	auto c5 = new Circle[3]{ 1.0,2.0,3.0 };
	for (int i = 0; i < 3; i++) {
		cout << c5[i].getArea() << endl;
	}
	//基于范围的for循环
	//for (auto x : c5) {
	//	cout << x.getArea() << endl;
	//}
	delete c1;
	delete[] c5;
	c1 = c5 = nullptr;

	delete c1;//C++11规定删除一个空指针的话不会发生异常
	return 0;
}