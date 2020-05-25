/*Abstraction and Encapsulation
�������װ

Data Filed Encapsulation(������ķ�װ)

���������public����ʽ��2������
* ���ݻᱻ����ķ����۸�
* ʹ��������ά�������׳���bug

Class Abstraction and Encapsulation(��ĳ������װ)
* �����
* * ����Ŀ��ϵͳ�����ǹ��ĵĺ���ѹҪ�صĹ���

* ��װ
* * �����ݺͺ��������Թ���飬�Լ����Ʒ���Ŀ���������ݺ��ֶ�

The Scope of Members & "this" pointer (��Ա��������thisָ��)

Hidden by same name(ͬ������)
* if a local variable has the same as a data field
(����Ա�����еľֲ�������ĳ������ͬ��)
* * �ֲ��������ȼ��ߣ��ͽ�ԭ��
* * ͬ���������ں����б�����

The this Pointer (this ָ��)
	a special built-in pointer
	references to the calling object

Simple way to avoid name hidden(�����������εļ򵥷���)
	�βε�����=�β�_


C++11:Default Member Initializers ���Ա�ľ͵س�ʼ��

	��C++03��׼�У�ֻ�о�̬�������γ�Ա���������о͵س�ʼ��
	C++11��׼�У��Ǿ�̬��Ա��������������ʱ����г�ʼ��
# https://isocpp.org/ C++��׼ίԱ��
	��������С���ų�ʼ��
	�������ͳ�Ա�����Զ��ƶϴ�С

Constructor Initializer(���캯����ʼ��)
	�ڹ��캯�����ó�ʼ���б��ʼ��������
		���ڻ�����������
		Circle::Circle():radius{1}{}
		Circle::Circle(){radius=1;}

Why we need a Constructor Iniyializer Lists?(Ϊ����Ҫ���캯����ʼ���б�)
	�����������һ���������ͣ�����Ϊ�����еĶ��󣬻�����Ƕ����
	��Ƕ��������ڱ�Ƕ����Ĺ��캯����ִ��ǰ�͹������

Default Constructor(Ĭ�Ϲ��캯��)
	Ĭ�Ϲ��캯���ǿ����޲ε��õĹ��캯�����Կ����Ƕ���Ϊ�ղ����б�Ĺ��캯����Ҳ���������ж���Ĭ�ϲ���ֵ�Ĺ��纯��

*/
#include<iostream>
#include"Circle.h"
using std::cout;
using std::endl;
using std::string;


class Circle1 {
public:
	Circle1() {
		//�޲���
		radius = 1.0;//���������Ϊ��
	}
private:
	double radius;
};

class Circle2 {
public:
	//���еĲ�������Ĭ��ֵ
	Circle2(double r=1.0)
		:radius{r}{}
private:
	double radius;
};
class X {
	int a = 1;
	int b = { 2 };
	//int c(3);

	string s{ 'H','e','l','l','o' };
	string s2{ "Hello" };
	string s3 = "World";

	int arr2[4]{ 1 };
	/*int arr1[] = { 1,2,3 };
	int arr3[]{ 12.0,32.0 };
	int arr4[]{ 1,2 };*/
};

int main() {

	//Circle c{ 2.0 };

	//cout << c.setRadiusObject(2.0).setRadiusObject(3.0).getArea() << endl;

	
	
	return 0;
}