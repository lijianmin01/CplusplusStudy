#pragma once
#include<iostream>
#include<string>
#include<array>

using std::string;
using namespace std::string_literals;

enum class Color {
	white,black,red,green,blue,yellow,
};


class Shape
{
private:
	Color color{ Color::black };
	bool filled{ false };
	std::array<string, 6> colorNames{ "white"s,"black"s,"red"s,"green"s,"blue"s,"yellow"s, };

public:
	Shape() = default;
	Shape(Color color, bool filled);

	Color getColor();
	void setColor(Color color);
	bool isFilled();
	void setFilled(bool filled_);

	string toString();
	string colorToString();
	string filledToString();

	virtual double getArea()=0;//有虚拟函数了，不能被抽象画
};

