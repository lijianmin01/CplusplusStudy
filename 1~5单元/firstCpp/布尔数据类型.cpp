/*
�������ͣ�bool expression��
������true ���� false

C++ keyword:bool true false
������������ǰ+is

�������������ε�ת��
0  <-------> false
true   -----> 1
non-zero ----> true

'a'   -> true
1*/

#include<iostream>

int main_��������() {
	bool isAlpha;
	isAlpha = false;
	if (!isAlpha) {
		std::cout << "isAlpha=" << isAlpha << std::endl;
		std::cout << std::boolalpha<<
					 "isAlpha=" << isAlpha << std::endl;
	}
	//isAlpha = 0
	//isAlpha = false
	return 0;
}