#include<iostream>

#include"Date.h"
#include"Employee.h"
int Employee::numberObjects = 0;

//�����ģ��ڶѺ�ջ����������������Ƕ�������Ϸֱ𴴽�Employee����

int main_����() {
	Employee e1;
	std::cout << e1.toString() << std::endl;
	Employee* e2 = new Employee("Iorange", Gender::male, Date(1999, 11, 19));
	std::cout << e2->toString() << std::endl;

	{
		Employee* e3 = new Employee("Iorange~~~", Gender::female, Date(1999, 11, 19));
		std::cout << e3->toString() << std::endl;
	}
	return 0;
}