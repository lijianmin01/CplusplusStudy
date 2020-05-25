/*
List Initialization 列表初始化

列表是用花括号括起来的一“些”值
	Direct list initialization(直接列表初始化)
	Copy list initialization(拷贝初始化)
*/

#include<iostream>

int main_列表初始化() {
	// 直接列表初始化
	int x{};// x is 0
	int y{ 1 };//y=1
	/*Array initialization*/
	int array1[]{ 1,2,3 };
	char s1[3]{ 'o','k' };
	char s3[]{ "Hello" };

	//拷贝列表初始化
	/*Variable initialization*/
	int z = { 2 };
	/*Array initialization*/
	int array2[] = { 4,5,6 };
	char s2[] = { 'y','e','s' };
	char s4[] = { "World" };
	char s5[] = "Alopa";//Omit curly braces(省略花括号)

	// 尽量使用列表初始化，除非你有一个很好地不用它的理由
	// 列表初始化不允许“窄化”，不允许丢失数据精度的隐式类型转换
	return 0;
}