#include<iostream>
using std::cout;
using std::endl;

//����һ���̳й��캯��
//	��������B�����캯��B��int��,B(Char)��������D��D�в��̳�/�̳�B��ctorʱ��Ч��

//��������������е��û��๹�캯��
//	D�����ӳ�Աdouble x;��D��double����ʼ���б����B��i������ʼ��x

//���������������ȵ��û���ctor,�ڹ�����Ƕ����
//	������E��E��int��,����D�м���E���������󣻴���D����۲�E ctor��B ctor����

class B {
public:
	B() { cout << "B()" << endl; }
	B(int i) { cout << "B(" << i << ")" << endl; }
	B(char c) { cout << "B(" << c << ")" << endl; }
};

//class D :public B {
//public:
//	using B::B;
//	D() = default;
//	//D() {}
//	//D(int i){}
//	//D(char c){}
//	D(double x) :B(static_cast<int>(x)), x{ 1.0 }{
//		cout << "D(" << x << ")" << endl;
//	}
//private:
//	double x{ 0.0 };
//};

class E {
public:
	E() { cout << "E()" << endl; }
};

class D :public B {
public:
	using B::B;
	D() = default;
	D(double x) :e1{}, e2{}, B(static_cast<int>(x)){
		cout << "D(" << x << ")" << endl;
	}
private:
	E e1, e2;
};

int main_BaseClassCtor() {
	B b;
	D d;
	D d2{ 3 };
	D d3{ 3.14 };
	return 0;
}
