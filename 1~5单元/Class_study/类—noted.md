# Concepts of Class 类的概念

## OO Programming Concepts (面向对象的概念)
* OOP利用对象进行程序设计

### 析构/构造函数简写：ctor和dtor

## A class may be declared without clors(类不可声明构造函数)
* 1、编译器会提供一个带有空函数的无参构造函数
* 2、只有未明确构造函数时，编译器才会提供这个构造函数，并称之为“默认构造函数”

## Constructing Objects(创建对象)
* without Arguments:(无参数)
	Circle circles1;
* with Arguments:(带参数)
	Circle circle2{5.5};
	//C++11 列表初始化
	//带有窄化检查（narrowing check）


		class Circle{
		public:
			double radius;
			Circle(){
				radius = 1;
			}
			Circle(double newRadius){
				radius = newRadius;
			}
			//...
		}

## Object Member Access Operator(对象访问运算符)
* To access the data & functions of an object:(访问对象中的数据和函数)
* * 点运算符，也称为对象成员访问运算符

		Circle circle1;
		circle1.radius = 10;
		int area = circle1.getArea();

## Object Copy & Anonymous Object 对象拷贝和匿名对象

	//class -> objects
	Circle c1;//调用Circle的默认ctor
	Circle c2(5.5);//调用Circle的有参ctor
	Circle c3{5.5};//直接列表初始化，调用有参ctor
	Circle c4={5.5};//拷贝列表初始化，调ctor

	auto c5 = Circle{2.0};//auto 类型推断
	decltype(c1) c6;//decltype类型推断

###### 代表类型的名字必须首字母大写并且其他字母大小写混合

### Memberwise Copy (成员拷贝)
* Example : circle2 = circle1;
* * 将circle的radius拷贝到circle2中
* * 拷贝后，circle  和 circle2 是两个不同的对象，但是半径的值是相同的（但是各自有以一个radius成员变量）

### Anonymous Object(匿名对象)
* Occasionally ,you may create an object and use it only once(有时需要创建一个只用一次的对象)
* An object without name is called anonymous objects.(这种不命名的对象叫做匿名对象)
*	Example

		int main() {
			Circle c1 = Circle(1.1);
			auto c2 = Circle{ 2.2 };//用匿名对象做拷贝列表初始化

			Circle c3{};//直接列表初始化，调用默认Ctor
			c3 = Circle{ 3.3 };//用匿名对象赋值

			cout << "Area is " << Circle{ 4.2 }.getArea() << endl;
			cout << "Area is " << Circle().getArea() << endl;//不推荐
			cout << "Area is " << Circle(5).getArea() << endl;//不推荐

			return 0;
		}

### class Replaces struct
* class 默认成员为私有的
* struct 默认成员为公共的

### Local class & Nested class(局部类和嵌套类)
* 局部类是在一个函数中声明的类
* 嵌套类是在另一个类中声明的类（名字空间声明的时候也可以嵌套）

## Separating Declaration from Implementatioon 将声明与实现分离
* C++中，类声明与实现可以分离
* * .h:类声明，描述类的结构
* * .cpp:类的实现，描述类方法的实现

## Avoiding Multiple Inclusion of Header Files(避免头文件被多次包含)
* C/C++使用预处理指令（Preprocessing Directives）保证头文件只被包含/编译

		#pragma once //C++03,C90
		_Pragma("once")//C++11,C99 //VS中用 __pragma代替
		+

## Object Pointer & Dynamic Object
* 对象指针与动态对象
* * 对象指针可以指向新的对象名
* * 箭头运算符 -> 用指针访问对象成员

		Circle circle1;
		Circle pCircle = &circle1;

		cout<<"The radius is"<<(*pCircle).radius <<endl;
		cout<<"The area is "<<(*pCircle).getArea()<<endl;

		(*pCircle).radius = 5.5;

		cout<<"The radius is"<<pCicle->radius<<endl;
		cout<<"The are is "<<pCircle->getArea()<<endl;

## Array of Objects 对象数组








