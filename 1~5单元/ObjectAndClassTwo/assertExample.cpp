#include<iostream>
#include<array>
#include<cassert>//ʹ��assert()���԰�����ͷ�ļ�
using std::cout;
using std::endl;
//����һ��ʹ�õݹ����factorial����assert���3�Ľ׳�

// ���������factorial��ɳ������ʽ����static_assert���3�Ľ׳�

//������������factorial(4)��С������

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