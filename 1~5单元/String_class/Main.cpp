#include<iostream>
using std::string;
using std::cout;
using std::endl;
#include <string>
using std::array;
#include<array>
void print(array<int, 4>& a);
//编写search函数，在数组中查找一个值
int search(array<int, 4>& a, int token)
{
	bool exist{ false };
	int i = 0;
	for (auto element : a)
	{
		if (element == token) {
			exist = true;
			break;
		}
		i++;
	}
	if (exist) {
		return i;
	}
	else {
		return -1;
	}
}
int main() {
	//string s1{"Welcome"};
	//cout << s1.substr(0, 1) << endl;
	//cout << s1.substr(3) << endl;
	//cout << s1.substr(3, 3) << endl;
	//W
	//come
	//com

	//string s1 = "ABC";
	//string s2 = s1;
	//for (int i = s2.size() - 1; i >= 0; i--) {
	//	cout << s2[i];
	//}
	////CBA
	//cout << endl;
	//string s3 = s1 + "DEFG";
	//cout << s3 << endl;
	////ABCDEFG

	//s1 += "ABC";
	//s2 = "ABE";

	//cout << (s1 == s2) << endl;
	//cout << (s1 != s2) << endl;//1
	//cout << (s1 > s2) << endl;
	//cout << (s1 >= s2) << endl;
	//cout << (s1 < s2) << endl;//1
	//cout << (s1 <= s2) << endl;//1

	////总结
	////创建字符串
	//string s = "Hello";
	//string s1{ "Hello" };
	//cout << s << endl;
	////clear
	//s.clear();
	//cout << s << endl;
	////用数组为字符串赋值
	//char arr[]{ 'W','o','r','l','d' };
	//s += arr;
	//cout << s << endl;
	////assign() 重新赋值
	//s.assign("Hello World");
	//cout << s << endl;
	////append
	//s.append("	");
	////s.append(5, " ");
	////s.append("!");
	//cout << s << endl;
	////insert 空白
	//s.insert(0, "	");
	//cout << s << endl;
	////移除字符串前面的空白
	//s.erase(0, s.find_first_not_of("\t\n\r"));
	//cout <<"移除字符串前面的空白: "<< s << endl;

	//cout << s << endl;
	////移除字符串后面的空白
	//s.erase(s.find_last_not_of("\t\n\r")+1);
	//s.append("!");
	//cout << "移除字符串后面的空白: " << s << endl;
	//
	////把字符串转化为整数或浮点数
	//s.assign("1024");
	//cout << s << endl;

	//int x = stoi(s);

	//string s2 = std::to_string(x);
	//cout << s2 + "~";
	//return 0;


	//数组类的使用
	array a1 { 1,2,3,4 };
	print(a1);
	//创建数组
	a1 = { 6,7,8,9 };
	print(a1);
	//为数组赋值
	array b1{ 100,200,300,40 };
	print(b1);
	a1.swap(b1);
	print(a1);
	print(b1);
	//交换数组

	//求数组大小
	cout << a1.size() << endl;
	//编写search函数，在数组中查找一个值
	cout <<"serch 2000 : "<< search(a1, 2000) << endl;
	cout << "serch 200 : " << search(a1, 200) << endl;
	//sort
	std::sort(b1.rbegin(), b1.rend());
	print(b1);
	//二维数组
	array<array<int,3>, 4>a8;

	return 0;
}

//打印数组
void print(array<int ,4>& a) {
	for (auto x : a) {
		cout << x << "  ";
	}
	cout << endl;
}