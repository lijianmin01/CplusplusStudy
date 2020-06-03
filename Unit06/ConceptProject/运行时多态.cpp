/*
将基类A的toString函数改为虚函数

将print函数参数改为基类指针类型
	main()中调用print(),实参为指向对象的基类指针

添加一个print函数，参数是基类引用的类型
	在main()中调用print()，参数为对象的基类引用

*/

#include<iostream>
#include<string>
using std::cout;
using std::endl;

class A {
public:
	virtual std::string toString() {
		return "A";
	}
};

class B : public A {
public:
	/*std::string toString() {
		return "B";
	}*/
	std::string toString() override { return "B" };
};

class C :public B {
public:
	std::string toString() {
		return "C";
	}
};

void print(A* o) {
	cout << o->toString() << endl;
}

//任务三
void print(A& o) {
	cout << o.toString() << endl;
}

int main() {
	A a; B b; C c;
	A* p1 = &a;
	A* p2 = &b;
	A* p3 = &c;

	print(p1);//A
	print(p2);//B
	print(p3);//C

	print(a);//A
	print(b);//B
	print(c);//C

	return 0;
}
