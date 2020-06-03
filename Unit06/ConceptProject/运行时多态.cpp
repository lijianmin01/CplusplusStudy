/*
������A��toString������Ϊ�麯��

��print����������Ϊ����ָ������
	main()�е���print(),ʵ��Ϊָ�����Ļ���ָ��

���һ��print�����������ǻ������õ�����
	��main()�е���print()������Ϊ����Ļ�������

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

//������
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
