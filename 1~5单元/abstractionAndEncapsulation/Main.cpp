/*Abstraction and Encapsulation
抽象与封装

Data Filed Encapsulation(数据域的封装)

数据域采用public的形式有2个问题
* 数据会被类外的方法篡改
* 使得类难于维护，容易出现bug

Class Abstraction and Encapsulation(类的抽象与封装)
* 类抽象
* * 提炼目标系统中我们关心的核心压要素的过程

* 封装
* * 绑定数据和函数的语言构造块，以及限制访问目标对象的内容和手段

The Scope of Members & "this" pointer (成员作用域与this指针)

Hidden by same name(同名屏蔽)
* if a local variable has the same as a data field
(若成员函数中的局部变量与某数据域同名)
* * 局部变量优先级高：就近原则
* * 同名数据域在函数中被屏蔽

The this Pointer (this 指针)
	a special built-in pointer
	references to the calling object

Simple way to avoid name hidden(避免重名屏蔽的简单方法)
	形参的名字=形参_


C++11:Default Member Initializers 类成员的就地初始化

	在C++03标准中，只有静态常量整形成员才能在类中就地初始化
	C++11标准中，非静态成员可以在他声明的时候进行初始化
# https://isocpp.org/ C++标准委员会
	不允许用小括号初始化
	数组类型成员不能自动推断大小

Constructor Initializer(构造函数初始化)
	在构造函数中用初始化列表初始化数据域
		对于基础数据类型
		Circle::Circle():radius{1}{}
		Circle::Circle(){radius=1;}

Why we need a Constructor Iniyializer Lists?(为何需要构造函数初始化列表)
	类的数据域是一个对象类型，被称为对象中的对象，或者内嵌对象
	内嵌对象必须在被嵌对象的构造函数体执行前就构造完成

Default Constructor(默认构造函数)
	默认构造函数是可以无参调用的构造函数，皆可以是定义为空参数列表的构造函数，也可以是所有都有默认参数值的够早函数

*/
#include<iostream>
#include"Circle.h"
using std::cout;
using std::endl;
using std::string;


class Circle1 {
public:
	Circle1() {
		//无参数
		radius = 1.0;//函数体可以为空
	}
private:
	double radius;
};

class Circle2 {
public:
	//所有的参数都有默认值
	Circle2(double r=1.0)
		:radius{r}{}
private:
	double radius;
};
class X {
	int a = 1;
	int b = { 2 };
	//int c(3);

	string s{ 'H','e','l','l','o' };
	string s2{ "Hello" };
	string s3 = "World";

	int arr2[4]{ 1 };
	/*int arr1[] = { 1,2,3 };
	int arr3[]{ 12.0,32.0 };
	int arr4[]{ 1,2 };*/
};

int main() {

	//Circle c{ 2.0 };

	//cout << c.setRadiusObject(2.0).setRadiusObject(3.0).getArea() << endl;

	
	
	return 0;
}