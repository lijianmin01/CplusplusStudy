#pragma once
class StackOfIntegers {
private:
	int elements[100];
	int size{ 0 };
public:
	StackOfIntegers();
	bool empty();
	int peek();
	void push(int value);
	int pop();
	int getSize();
};