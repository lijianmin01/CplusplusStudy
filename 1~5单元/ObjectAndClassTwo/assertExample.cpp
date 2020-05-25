#include<iostream>
#include<array>
#include<cassert>//使用assert()断言包含本头文件
using std::cout;
using std::endl;
//任务一：使用递归计算factorial，用assert检查3的阶乘

// 任务二：将factorial变成常量表达式，用static_assert检查3的阶乘

//任务三：创建factorial(4)大小的数组

constexpr int factorial(int n) {
	if (n == 0) {
		//return 2;//error
		return 1;
	}
	else {
		return n * factorial(n - 1);
	}
}

int main_assert() {
	/*int x = 3;
	int f = factorial(x);
	static_assert(factorial(3) == 6, "factorial(3) should be 6");
	assert(f == 6);
	cout << f << endl;*/

	static_assert(factorial(4) == 24, "factorial(4) should be 24");
	std::array<int, factorial(4)> a;
	cout << a.size() << endl;
	return 0;
}