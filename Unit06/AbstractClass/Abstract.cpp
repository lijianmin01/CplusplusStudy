/*
������ʹ��麯��

1��ʵ��Shape Circle Rectangle��
2����Shape�����virtual  getArea()=0;
	���Դ���Shape����
3����Circle�в�ʶ��getArea(),����Circle����
	��Circle��ʵ��getArea����override;����Circle����
*/

#include<iostream>
#include"Shape.h"
#include"Circle.h"
#include"Rectangle.h"
using std::cout;
using std::endl;

int main() {
	Circle c{ 1.2,Color::green,false };
	cout << c.getArea() << endl;
	return 0;
}






