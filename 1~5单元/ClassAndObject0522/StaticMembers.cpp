//任务2：通过类名/对象名调用静态成员函数

#include<iostream>
#include"Square.h"
using std::cout;
using std::endl;
//文件前声明静态常量
int Square::numberOfObjects=10;

int main_staticMembers() {
	Square s1;
	cout << s1.getNumberOfObjects() << endl;
	Square s2{ 2.0 };
	cout << Square::getNumberOfObjects() << endl;

	return 0;
}