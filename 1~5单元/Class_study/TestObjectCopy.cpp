#include<iostream>
using std::cout;
using std::endl;

class Square {
private:
	double side = 1.0;
public:
	Square(double side) {
		this->side = side;
	}
	Square() = default;//C++11强制编译器生成一个默认构造函数
	double getArea() {
		return (side * side);
	}
};

int main_TestObjectCopy() {
	Square s1, s2{4.0};
	cout << s1.getArea() << endl;
	cout << s2.getArea() << endl;

	s2 = s1;
	cout << s1.getArea() << endl;
	cout << s2.getArea() << endl;

	return 0;
}