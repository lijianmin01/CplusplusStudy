#include<iostream>
using std::cout;
using std::endl;

//任务一：创建类结构：Computer->PC ->Laptop 以及相应的ctor/dtor

//	main中创建Desktop/Laptop的对象，观察ctor/dtor调用次序

//任务二：增加类Camera作为Laptop的内嵌对象c的类型
//	main中创建Laptop对象，观察内嵌对象c的构造与基类构造次序

class Computer
{
public:
	Computer()
	{
		cout << "Computer()" << endl;
	}

	~Computer()
	{
		cout << "~Computer()" << endl;
	}
};

class Pc : public Computer
{
public:
	Pc()
	{
		cout << "PC()" << endl;
	}

	~Pc ()
	{
		cout << "~PC()" << endl;
	}
};

class Desktop:public Pc
{
public:
	Desktop()
	{
		cout << "Desktop()" << endl;
	}

	~Desktop()
	{
		cout << "~Desktop()" << endl;
	}
};

//内嵌对象
class Camera
{
public:
	Camera()
	{
		cout << "Embedded Camera()" << endl;
	}

	~Camera()
	{
		cout << "~Embedded Camera()" << endl;
	}
};

class Laptop : public Pc
{
private:
	Camera c{};
public:
	Laptop()
	{
		cout << "Laptop()" << endl;
	}

	~Laptop()
	{
		cout << "~Laptop()" << endl;
	}
};


int main() {
	Desktop d{};
	Laptop l{};
	return 0;
}
//Computer()
//PC()
//Desktop()
//Computer()
//PC()
//Embedded Camera()
//Laptop()
//~Laptop()
//~Embedded Camera()
//~PC()
//~Computer()
//~Desktop()
//~PC()
//~Computer()
