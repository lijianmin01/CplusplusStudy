/*
1、键盘输入一个字母后回车，世界进入缓冲区是2个字符

2、使用cin输入信息后，有换行字符留在缓冲区，从而而导致return语句前的cin.get()不起作用

*/

#include<iostream>
using std::cin;
using std::cout;
using std::endl;

int main_BufferedIO() {
	//拿到cin对象的缓冲区指针
	auto p = cin.rdbuf();

	// 从键盘读入字符到缓冲女权，保留字符在缓冲区
	auto x = cin.peek();

	cout << "x = " << x << endl;

	//显示缓冲区的字符数量
	auto size{ p->in_avail() };
	cout << "Ther are " << p->in_avail() << "characters in the buffer ." << endl;
	//把缓冲区 的字符都取出来并显示
	for (int i = 0; i < size; i++) {
		cout << i + 1 << " : " << cin.get() << endl;
	}
	return 0;
}