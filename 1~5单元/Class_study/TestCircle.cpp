#include<iostream>
using std::cout;
using std::endl;

class Circle {
public:
	double radius;
	Circle() {
		radius = 1.0;
	}
	Circle(double r) {
		radius = r;
	}
	double getArea() {
		return (radius * radius * 3.14);
	}
};

//int main() {
//	Circle c1;
//	Circle c2{ 2.0 };
//
//	cout << c1.getArea() << endl;//3.14
//	cout << c2.getArea() << endl;//12.56
//
//	return 0;
//}



//int main() {
//	Circle c1 = Circle(1.1);
//	auto c2 = Circle{ 2.2 };//�����������������б��ʼ��
//
//	Circle c3{};//ֱ���б��ʼ��������Ĭ��Ctor
//	c3 = Circle{ 3.3 };//����������ֵ
//
//	cout << "Area is " << Circle{ 4.2 }.getArea() << endl;
//	cout << "Area is " << Circle().getArea() << endl;//���Ƽ�
//	cout << "Area is " << Circle(5).getArea() << endl;//���Ƽ�
//
//	return 0;
//}








