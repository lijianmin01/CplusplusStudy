/* �Զ������Ƶ���decltype�ؼ���
decltype : Declare Type��������֪���������±�����
�ؼ���decltype 
	�ڱ���ʱ���Ƶ�һ�����ʽ�����ͣ������ó�ʼ�������﷨��ʽ�е���sizeof

*/

#include<iostream>
using std::cout, std::endl;
int fun1() { return 10; }

auto fun2() { return 'g'; } //C++14
int main_decltype�ؼ���() {
	//Data type of x is same as return of fun1()
	//and type of y is same as return of fun2()
	decltype(fun1()) x=10;
	decltype(fun2()) y = fun2();
	cout << typeid(x).name() << endl;//int
	cout << typeid(y).name() << endl;//char

	cout << x<< "  " <<typeid(x).name() << endl;//10	int
	cout << y << "  "<<typeid(y).name() << endl;//g		char

	return 0;
}







