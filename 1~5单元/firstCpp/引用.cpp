/*
Reference ����
	���þ�����һ�������ı���


*/

#include<iostream>
using std::cout;
using std::endl;

// ��ֵ����
void swap1(int x, int y) {
	int t;
	t = x;
	x = y;
	y = t;
}

//��ָ�봫��
void swap2(int* x, int* y) {
	int t;
	t = *x;
	*x = *y;
	*y = t;
}

//�����ô���
void swap3(int& x, int& y) {
	int t;
	t = x;
	x = y;
	y = t;
}
int main_yinyong() {

	//int x=0;
	//int& rx = x;//& �ǿ������������ͣ�����������
	////Ҳ������ôд
	////int x, & rx = x;
	////auto a0{ 1 }, a1{ 6 };
	//int a = 1, b{ 6 };
	//cout << "Before: a=" << a << "  b=" << b << endl;
	//swap1(a, b);
	//cout << "After: a=" << a << "  b=" << b << endl << endl;

	//auto a1{ 1 }, b1{ 6 };
	//cout << "Before: a1=" << a1 << "  b1=" << b1 << endl;
	//swap2(&a1, &b1);
	//cout << "After: a1=" << a1 << "  b1=" << b1 << endl << endl;

	//auto a2{ 1 }, b2{ 6 };
	//cout << "Before: a2=" << a2 << "  b2=" << b2 << endl;
	//swap3(a2, b2);
	//cout << "After: a2=" << a2 << "  b=" << b2 << endl << endl;

	/*
	efore: a=1  b=6
	After: a=1  b=6

	Before: a1=1  b1=6
	After: a1=6  b1=1

	Before: a2=1  b2=6
	After: a2=6  b=1
	*/

	int x = 0;
	int y{ 10 };
	int& rx = x;
	rx = 8;
	cout << "x = " <<  x << endl;

	const char* s = "Hello";
	const char* t = "World";

	const char*& r = s;
	r = t;//s = t
	cout << r << endl;
	cout << s << endl;
	return 0;
}
