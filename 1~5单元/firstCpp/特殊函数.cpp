/*Overloading Functions (重载函数)

编译器如何匹配重载函数调用
-》看参数 ：个数、类型、顺序

二义调用
	某函数调用有多个匹配项，但编译器无法确定正确的项
	二义调用会导致编译错误

Default Arguments(函数默认参数)
	可以声明带默认参数值的函数
	无参调用函数是，默认值会被传递给形式参数

	定义时需要注意：
		参数列表中默认值参数应后置

	调用时需注意：
		参数列表中实参应前置

	函数重载时，不允许重定义默认参数

Inline Functions(内联函数)

	Declaration(声明内联函数)
	inline int max(int a,int b){
		return (a > b ?a:b);
	}

	Calling(调用内联函数)
	int x = max(3,5);
	int y = max(0,5);

	Inline expansion(内立案展开)
	int x =(3 > 5 ?3:5);

	内联函数的声明和定义一般不分开

Restrictions for inline function(内联函数的使用限制)
	Desire for short functions(适用于平凡调用的段函数)
	不使用多处调用的长函数

内联函数的编译机制

基于范围的for循环的语法
	for （元素名变量；广义集合）{循环体}
		“元素名变量”可以是引用类型，以便直接修改集合元素的值
		“元素名变量”也可以是const类型，避免循环体修改元素的值
		其中“广义集合”即使“Range(范围)”，是一些元素组成的一个整体

	“广义集合”的例子
		auto a1[]{1,3,5,7};
		std::array<int,4>a2{2,4,6,8};
		std::vector<int>v={}42,7,5};//向量
		std::vector<std::string>s{"Hello","World","!"};

if statement with an initializer(带有初始化器的if语句)
	
		if(auto x=f00(42);x>40){
			//do something with x
		}else{
			//do something with x
		}
*/

#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;
int i = 100;

//int max(int x, int y) {
//	return x > y ? x : y;
//}
//
//int max(int a, int b, int c) {
//	return max(a, max(b, c));
//}

/*模板类型*/
template<typename T>
auto max(T x, T y) {
	return x > y ? x : y;
}

template<typename T>
auto max(T a, T b, T c) {
	return max(a, max(b, c));
}

int main() {
	
	//Variable Scope
	//int i{ 100 };
	/*for (int i = 1; i < 5; i++) {
		cout << std::to_string(i) + " "<<endl;
		cout << :: i << endl;
	}*/
		//1
		//100
		//2
		//100
		//3
		//100
		//4
		//100

	/**/
	//Overloading Function
	//cout << max(1, 2, 3);//3

	/*cout << max(1, 2, 3)<<endl;
	cout << max(9.9, 10.3, 6.2)<<endl;*/

	//3
	//10.3

	//Default Argument

	/*
	基于范围的for循环的含义
		从集合中取出某个元素
		保证所有元素都被遍历
	*/
	//例：吧把数组a的元素都输出到屏幕上；然后把数组的元素翻倍
	//int a[] = { 2,1,4,3,5 };
	//for (auto i : a) {
	//	cout << i << endl;
	//}
	//cout << endl;
	//for (auto& i : a) {
	//	i = 2 * i;
	//}
	//cout << endl;
	//for (auto i : a) {
	//	cout << i << endl;
	//}
	/*
	2
	1
	4
	3
	5


	4
	2
	8
	6
	10
	*/

	/* 猜大小
	电脑随机生成一个0~100间的整数
	用户猜一个整数，输入电脑
	电脑判断用户输入的整数的大小，提示用户 猜大了/猜小了/猜中了
	*/
	//cout << "正在生成0~100之间的整数.....\n";
	//cout << "请输入你猜测的整数：";
	//auto x{ 0 };//int x=0;
	//cin >> x;
	////生成随机数
	////rand();<cstdlib>
	//if (int z = rand() % 100; z > x) {
	//	cout << "你猜小了，生成的数是：" << z << endl;
	//}else if (z < x) {
	//	cout << "你猜大了，生成的数是：" << z << endl;
	//}else {
	//	cout << "恭喜你，猜对了\n";
	//}

	/*
	利用带有初始化的switch语句，将百分之成绩转化成五分制
	[90,100]	A
	[80,89]		B
	[70,79]		C
	[60,69]		D
	[0,59]		E
	*/
	cout << "请输入课程成绩: ";
	int score = 0;
	cin >> score;
	//百分制/10，利用带有初始化器的switch语句的结果判别五分制等级
	cout << "你的课程成绩为：";
	switch(int x = score / 10; x) {
	case 10:
	case 9:
		cout << "A\n";
		break;
	case 8:
		cout << "B\n";
		break;
	case 7:
		cout << "C\n";
		break;
	case 6:
		cout << "D\n";
		break;
	default:
		cout << "E\n";
	}
	return 0;
}



