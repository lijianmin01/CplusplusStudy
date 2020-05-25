/*
布尔类型（bool expression）
其结果是true 或者 false

C++ keyword:bool true false
布尔类型名字前+is

布尔类型与整形的转换
0  <-------> false
true   -----> 1
non-zero ----> true

'a'   -> true
1*/

#include<iostream>

int main_布尔类型() {
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