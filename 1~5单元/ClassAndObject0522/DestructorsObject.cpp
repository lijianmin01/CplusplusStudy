#include<iostream>

#include"Date.h"
#include"Employee.h"
int Employee::numberObjects = 0;

//任务四：在堆和栈（函数作用域与内嵌作用域）上分别创建Employee对象

int main_析构() {
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