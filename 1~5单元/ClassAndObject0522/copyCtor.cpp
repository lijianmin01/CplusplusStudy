#include<iostream>
#include"Square.h"
//����2���ڶѺ�ջ�ֱ𿽱�Square����

int Square::numberOfObjects = 0;

int main() {
	Square s1{ 10.0 };
	std::cout << "Square is " << Square::getNumberOfObjects << std::endl;

	Square s2{ s1 };
	std::cout << "Square is " << Square::getNumberOfObjects << std::endl;

	Square* s3 = new Square{ s1 };
	std::cout << "Square is " << Square::getNumberOfObjects << std::endl;

	std::cout << "s3 is area is " << s3->getArea() << std::endl;

	delete s3;
	std::cout << "Square is " << Square::getNumberOfObjects << std::endl;

	return 0;
}