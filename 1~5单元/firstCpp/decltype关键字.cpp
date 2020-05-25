/* 自动类型推导：decltype关键字
decltype : Declare Type（利用已知类型声明新变量）
关键字decltype 
	在编译时期推导一个表达式的类型，而不用初始化，其语法格式有点像sizeof

*/

#include<iostream>
using std::cout, std::endl;
int fun1() { return 10; }

auto fun2() { return 'g'; } //C++14
int main_decltype关键字() {
	//Data type of x is same as return of fun1()
	//and type of y is same as return of fun2()
	decltype(fun1()) x=10;
	decltype(fun2()) y = fun2();
	cout << typeid(x).name() << endl;//int
	cout << typeid(y).name() << endl;//char

	cout << x<< "  " <<typeid(x).name() << endl;//10	int
	cout << y << "  "<<typeid(y).name() << endl;//g		char

	return 0;
}







