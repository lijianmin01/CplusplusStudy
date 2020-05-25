#include<iostream>
#include<cassert>

#include"StackOfIntegers.h"

using std::cout;
using std::endl;
//任务：创建Stack对象，展示入栈出栈操作

int main() {
	StackOfIntegers s1{};
	for (int i = 0; i < 5; i++) {
		s1.push(i + 1);
	}
	cout << "Stack size = " << s1.getSize() << endl;
	cout << "Top element is :" << s1.peek() << endl;
	for (int i = 0; s1.getSize()>0; i++) {
		cout << s1.pop() << "  ";
	}
	cout << endl;
	cout << "Stack now is empty " << s1.empty() << endl;
	return 0;
}