//����2��ͨ������/���������þ�̬��Ա����

#include<iostream>
#include"Square.h"
using std::cout;
using std::endl;
//�ļ�ǰ������̬����
int Square::numberOfObjects=10;

int main_staticMembers() {
	Square s1;
	cout << s1.getNumberOfObjects() << endl;
	Square s2{ 2.0 };
	cout << Square::getNumberOfObjects() << endl;

	return 0;
}