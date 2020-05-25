#include<iostream>

#include"Date.h"
#include"Employee.h"

//任务四：创建Employee对象，然后修改其生日
int main() {
	Employee e;
	//setter
	e.setBirthday(Date(1999, 11, 19));
	std::cout << e.toString << std::endl;
	//getter
	/*e.getBirthday()->setYear(2002);
	std::cout << e.toString << std::endl;*/
	return 0;
}