/* auto关键字

（~C++03）auto放在声明之前
	变量的存储策略，自动变量
	常省略
（C++11）在声明变量的时候根据变量初始值的类型自动为此变量选择匹配的类型

	int a=10;
	auto au_a = a;//自动类型推断，au_a为int类型
	cout<<typeid(au_a).name()<<endl;

auto 的使用限制（1）
	1、auto变量必须在定义时初始化，这类似于const关键字
		auto a1=10;
		auto b1; // 错误，编译器无法推导b1的类型
		b1 = 10;

	2、定义在一个auto序列的变量必须始终推导成同一类型
		auto a4=10,a5{20};//正确
		auto b4{10},b5=20.0;//错误，没有推导为同一类型
	
	3、如果初始化表达式是引用或const，则去除引用或const语义
		* auto不管&和const
		int a{10};
		int &b=a;
		auto c=b;//c的类型为int而非int&(去除引用)
		const int a1{10};
		auto b1=a1;//b1的类型为int而非const int（出去const）
	
	4、如果auto关键字带上了&号，则不去除引用或const语义
		int a=10;int& b=a;
		auto& d=b;//此时d的类型才为int&;

		const int a2=10;
		auto& b2=a2;//因为auto带上了&,故不去除const,b2类型为const int
	
	5、初始化表达式为数组时，auto关键字推导类型为指针
		int a3[3] = {1,2,3};
		auto b3=a3;
		cout << typeid(b3).name()<<endl; //输出为 int*()输出与编译器有关)

	6、若表达式为数组且数组auto带上&，则推导类型为数组类型
		int a7[3] ={1,2,3};
		auto& b7 = a7;
		cout << typeid(b7).name() << endl;//输出与 编译器有关

	7、C++14中，auto可以作为函数的返回值类型和参数类型

Why Almost Always Auto(为何尽量使用auto)
	Using auto are for correctness,performance(性能)，maintainability(可维护性)、robustness(健壮性)and convenience
		保证在声明变量时即初始化
	“int x = 3;”能变成auto形式吗？
		auto x = int{3};//初始化列表
		auto y = int{3.0};//编译器报错
		auto z = int(3.0);//C语言的强制类型转换，z的值是整数3

	*/



#include<iostream>
#include<typeinfo>
using std::endl;
using std::cout;
using std::cin;

auto max(int x, int y) {
	return x > y ? x : y;
}
int main_auto关键字() {
	/*int a = 10;
	auto au_a = a;
	cout << typeid(au_a).name() << endl;*/
	//int

	//如果初始化表达式是引用或const,则去除引用或const语义
	int y1{ 1 }, &y2{y1};
	auto y3{ y2 };
	cout << typeid(y3).name()<<endl;
	// int

	//如果auto关键字带上了&号，则不去除引用或const语义
	
	//C++14中，auto可以作为函数的返回值类型和参数类型
	auto x1{ 1 }, x2{ 2 };
	cout << max(x1, x2) << endl;
	//2
	return 0;
}