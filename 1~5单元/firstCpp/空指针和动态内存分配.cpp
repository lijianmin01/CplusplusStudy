/*
nullptr and Dynamic Memory Allocation
nullptr 和 动态内存分配

C++11 引入保留字“nullptr” 作为空指针
*/

#include<iostream>
using std::cout;
using std::endl;

void codeExample() {
	auto x{ 10 };
	int* p = nullptr;
	int* q{ nullptr };
	q = &x;
}
/*
Dynamic memory management: Allocate/Release(动态内存的管理：分配/释放)
	
C++ 中通过运算符 new 申请动态内存
	new <类型名>（初值）； // 申请一个变量空间
	new <类型名>[常量表达式]； // 申请数组
	 - 如果申请成功，返回指定类型的内存的地址
	 - 如果申请失败，抛出异常，或者返回空指针（nullptr）(C++)
动态内存使用完毕后，要用delete运算符来释放
	delete <指针名>；//删除一个变量指针
	delete []<指针名>； //删除数组空间

	char* s = new char('a');
	delete s;
	int* p = new int[10];
	delete[] p;

	*/
int main_nullptr() {
	int* p = nullptr;
	int* q{ nullptr }; //C++11	Initializer list

	p = new int(42);
	q = new int[4];
	cout << "Before: *p = " << *p << endl;
	*p = 24;
	cout << "After : *p = " << *p << endl;
	for (int i = 0; i < 4; i++) {
		cout << *(q + i) << endl;
	}

	/*
	Before: *p = 42
	After : *p = 24
	-842150451
	-842150451
	-842150451
	-842150451
	*/
	return 0;
}
