/*
Type conversion(����ת��)

C Style:(type) value
printf("%d",(int)2.5);

C++ Style: static_cast<type> value

����ת����������ʾ��������Զ��Ҫ��������ת��

*/

#include<iostream>
using std::cout;
using std::endl;
int main_static_cast() {
	cout << 1 / 2 << endl;
	cout << static_cast<double>(1) / 2<<endl;

	cout << 1 / 2<<endl;
	cout << static_cast<double>(1 / 2)<<endl;

	//0
	//0.5
	//0
	//0
	return 0;
}