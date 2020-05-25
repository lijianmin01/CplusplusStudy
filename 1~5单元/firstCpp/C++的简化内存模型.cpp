/* Simplified Memory Model for C++
C++ 的简化内存模型
1、Stack（栈）
	* 编译器自动分配释放
2、Heap(堆)  new/delete
	* 一般由程序员分配释放，若程序员不释放，程序结束时可能由OS回收
3、Global/Static(全局区/静态区)
	* 全局变量和静态变量的存储是放在一起的
	* 可以简单认为
		* * 程序启动全局/静态变量就在此处
		* * 程序结束释放
4、Constant(常量区)
	* 可以简单理解为所有常量都放在一起
	* 该区域的内容不可以修改

* 堆向搞地址方向生长
* 栈向低地址方向生长

5、符号常量（包括枚举值）必须全部大写并用下划线分隔单词

const and pointers(常量与指针)

	指向常量值的一个指针常量
		* 特征：指针指向的内容不可以通过指针的间接引用（*p）来改变的
			const int x=1;
			const int* p1;
			p1 = &x; //指针p1的类型是（const int*）

			*p1 = 10;//error

			char * s1="hello"; //error
			const char* s2 = "hello";//correct
	
	Pointer Constant(指针常量)
		* 指针本身的内容是个常量，不可以改变
			int x = 1,y=1;
			int * const p2=&x;//常量p2的类型是（int*）

			*p2=10;//OKAY -> x=10
			p2=&y; //Error p2 is a constant
		* 数组名就是数组的首地址的别名。现在可以说：数组名就是一个指针常量

	Summary(总结)
		const int * x;
		int * const y;

		在前先读，在前不变
			* *（指针）和const(常量)谁在前先读谁
			* * 代表被指的数据，名字代表指针地址
			* const在谁前面谁就不允许改变

用using 代替typedef(C++11)
Syntax(语法)：using identifier = type-id
	//类型别名，等同于typedef unsigned int UInt;
	using UInt = unsigned int;
	//名称‘UInt’现代类型
	UInt x =42u;

	//类型别名，等同于typedef void(*FuncType)（int，int）;
	using FuncType = void (*)(int,int);
	//名称"FuncType"现代指向函数的指针
	void example(int,int){}
	FuncType f = example;

	代表类型的名字必须是首字母大写并且其他字母大小写混合

定义模板的别名，只能使用using

*/

#include<iostream>
using std::cout;
using std::endl;
int main_C的简化内存模型() {

	// 常量声明
	const int x=42;
	// 常量不可变
	//x = 20;
	// 常量指针所指向数据不可改变
	int y = 2;
	const int* p = &x;
	//(*p) = 21;
	const int* q = &y;
	//(*q) = 4;
	// 指针常量不可变
	int* const r = &y;
	int z = 5;
	//r = &z;
	*r = 20;
	cout << "(*r) = "<<*r << endl;
	cout << "y = " << y << endl;
	//(*r) = 20
	//y = 20

	// 常指针常量
	const int* const s = &y;
	//s=&z;

	const char* str = "hello";
	//*str = 'p';

	auto p1 = &y;
	auto p2 = "World";
	auto const p3 = "!";

	return 0;
}



