/*
����1��������A���������У�������˽�г�Ա ijk

�������
	������pub���м̳�A����Pro�����̳�A����Pri˽�м̳�A
	�۲��������еĺ���foo()�Ի����Ա�ķ���

��������
	�۲�main()�����������Ի����Ա�ķ���
*/
#include<iostream>
using std::cout;
using std::endl;

class A {
public:
	int i{ 0 };
protected:
	int j{ 0 };
private:
	int k{ 0 };
};

class Pub :public A {
public:
	void foo() { i++; j++; };
};

class Pro :protected A {
public:
	void foo() { i++; j++; };
};

class Pri :private A {
public:
	void foo() { i++; j++; };
};
int main_pub_pri_pro() {
	Pub pub;
	Pro pro;
	Pri pri;

	//pub.i++; pub.j++; pub.k++;
	//pro.i++; pro.j++; pro.k++;
	//pri.i++; pri.j++; pri.k++;


	return 0;
}