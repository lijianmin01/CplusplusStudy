/*
创建A/B/C三个类，B继承A，C继承B
	ABC均有toString函数

创建print函数，接受A类型的参数，调用A对象的toString（）

重载print函数，接受B/C类型参数，调用toString()

*/

#include<iostream>
#include<string>
using std::cout;
using std::endl;

class A {
public:
	std::string toString() {
		return "A";
	}
};

class B : public A {
public:
	std::string toString() {
		return "B";
	}
};

class C :public B {
public:
	std::string toString() {
		return "C";
	}
};

void print(A o) {
	cout << o.toString() << endl;
}

//进行函数重载
void print(B o) {
	cout << o.toString() << endl;
}
void print(C o) {
	cout << o.toString() << endl;
}

int main1() {
	//A a;
	//print(a);//A

	//B b;
	//print(b);//A

	//C c;
	//print(c);//A

	//进行函数重载
	A a;
	print(a);//A

	B b;
	print(b);//B

	C c;
	print(c);//C
	return 0;
}
