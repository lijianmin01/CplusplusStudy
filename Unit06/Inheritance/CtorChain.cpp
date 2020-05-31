#include<iostream>
using std::cout;
using std::endl;

//����һ��������ṹ��Computer->PC ->Laptop �Լ���Ӧ��ctor/dtor

//	main�д���Desktop/Laptop�Ķ��󣬹۲�ctor/dtor���ô���

//�������������Camera��ΪLaptop����Ƕ����c������
//	main�д���Laptop���󣬹۲���Ƕ����c�Ĺ�������๹�����

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

//��Ƕ����
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
