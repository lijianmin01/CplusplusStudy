/*
����A/B/C�����࣬B�̳�A��C�̳�B
	ABC����toString����

����print����������A���͵Ĳ���������A�����toString����

����print����������B/C���Ͳ���������toString()

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

//���к�������
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

	//���к�������
	A a;
	print(a);//A

	B b;
	print(b);//B

	C c;
	print(c);//C
	return 0;
}
