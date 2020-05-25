#pragma once
//创建Square类

//添加拷贝构造函数、析构函数、添加输出信息

class Square {
private:
	double side{ 1.0 };
	
public:
	static int numberOfObjects;
	Square(double side) {
		this->side = side;
		numberOfObjects++;
	}
	Square():Square(1.0){}

	Square(const Square& s) {
		this->side = s.side;
		numberOfObjects++;
		std::cout << "Square (const Square&) is invoked " << std::endl;
	}

	~Square() {
		numberOfObjects--;
	}
    double getSide() const { return side; }
    void setSide(double side) { this->side = side; }

	double getArea() {
		return this->side *this->side;
	}

    static int getNumberOfObjects() { return numberOfObjects; }

};
