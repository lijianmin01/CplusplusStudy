#include<iostream>
#include<string>
#include"Shape.h"
#include"Circle.h"
#include"Rectangle.h"

using std::cout;
using std::endl;

//创建Shape/Circle/Rectangle对象
//用子类对象调用基类函数toString

int main(){
    Shape s1{Color::blue,false};
    Circle c1{3.9};
    Rectangle r1{4.0,1.0};

    cout<<s1.toString()<<endl;
    cout<<c1.toString()<<endl;
    cout<<r1.toString()<<endl;
    return 0;
}