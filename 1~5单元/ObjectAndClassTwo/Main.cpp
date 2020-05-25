#include<iostream>
#include<array>
#include<cassert>
using std::cout;
using std::endl;
using std::array;

//Constexpr说明符可在编译时计算函数或变量的值
constexpr int max(int a, int b) {
	//c++14才允许constexpr函数中有分支循环等
	if (a > b) return a;
	else
	{
		return 0;
	}
}


int main_1() {
	//int m = 1;
	//const int rcm = m++; //rcm是运行期常量
	//const int cm = 4;//编译期常量，等价于：constexpr int cm=4;

	//int a1[max(m, rcm)];//错误，m&rcm不是编译期常量

	//std::array<char, max(cm, 5)> a2;

	array a{ 1,2,3 };
	for (size_t i = 0; i <= a.size(); i++) {
		assert(i < 3);
		cout << a[i] << "	" << (i == a.size() ? "" : "") << endl;

	}
	return 0;
}

