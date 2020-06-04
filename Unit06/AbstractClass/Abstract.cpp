/*
抽象类和纯虚函数

1、实现Shape Circle Rectangle类
2、在Shape中添加virtual  getArea()=0;
	尝试创建Shape对象
3、在Circle中不识闲getArea(),创建Circle对象
	在Circle中实现getArea（）override;创建Circle对象
*/

#include<iostream>
#include"Shape.h"
#include"Circle.h"
#include"Rectangle.h"
using std::cout;
using std::endl;

int main() {
	Circle c{ 1.2,Color::green,false };
	cout << c.getArea() << endl;
	return 0;
}






